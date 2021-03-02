#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Bookmark.h"

#include <QFileDialog>
#include <QStandardPaths>

#include <QImageReader>
#include <QImageWriter>
#include <QMessageBox>



//#include <qnetwork.h>
//#include <QNetworkAccessManager>
//#include <QNetwork>
//#include <QNetworkAccessManager>
#include <QDebug>

#include <iostream>
#include <vector>
#include <filesystem>
#include <algorithm>
#include <memory>
#include <variant>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_graphicsScene = new QGraphicsScene();
    m_graphicsScene->setItemIndexMethod(QGraphicsScene::NoIndex);

    //Initialisation de l'image en colorant chaque pixel selon un format RGB
    QImage bground(50, 50, QImage::Format_RGB888);
    for (int y = 0; y < 50 ; y++)
    {
        for (int x = 0; x < 50 ; x++)
        {

            bground.setPixel(x, y, qRgb(30, 30, 30));

        }
    }
    m_graphicsScene->setBackgroundBrush(QPixmap::fromImage(bground));

    ui->m_graphicsView->setScene(m_graphicsScene);

    ui->statusBar->showMessage(QString::fromLatin1("Prêt"), 0);
    setCounter(0);
    setTotalPage(0);

    MyHistorique historique;
    historique.setName();
    std::vector<std::string> name = historique.getName();
    int n = name.size();
    for (int i = 0; i < n; i++) {
        const QString folder = QString::fromStdString(name[i]);
        QAction* action = new QAction(folder);
        ui->menuHistorique->addAction(action);
        action->setData(i);
    }

    connect(ui->menuHistorique, SIGNAL(triggered(QAction*)), this, SLOT(onPressHistorique(QAction*)));

    /*manager = new QNetworkAccessManager();
    QObject::connect(manager, &QNetworkAccessManager::finished,
        this, [=](QNetworkReply* reply) {
            if (reply->error()) {
                qDebug() << reply->errorString();
                return;
            }
            QString answer = reply->readAll();
            qDebug() << answer;
        }
    );*/

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setMedias(std::vector<wstring> vect) {
    medias = vect;
};

void MainWindow::setCounter(int x) {
    counter = x;
};

std::vector<std::wstring> MainWindow::getMedias() {
    return medias;
};

std::wstring MainWindow::getPicturePath() {
    return medias[counter];
}

void MainWindow::setTotalPage(int total) {
    m_totalPage = total;
};


void MainWindow::onPressHistorique(QAction* action) {
    MyHistorique historique;
    historique.setName();
    std::vector<std::string> name = historique.getName();
    int value = action->data().toInt();
    QString qStrFilePath = QString::fromWCharArray(historique.showFiles(value)[0].c_str());
    setMedias(historique.showFiles(value));
    setTotalPage(historique.showFiles(value).size());
    setCounter(0);
    showImage(qStrFilePath);
    qDebug() << qStrFilePath;


}

void MainWindow::onPressLoadImage()
{
    QString qStrFilePath = QFileDialog::getOpenFileName(this,
        tr("Ouvrir un fichier"),
        QStandardPaths::writableLocation(QStandardPaths::CacheLocation),
        tr("Archive (*.cbr *.cbz *.rar *.zip )"));

    if (qStrFilePath.isEmpty())
        return;

    auto archive = CreateArchive(qStrFilePath.toStdWString());
    archive->setPageNumber();
    setTotalPage(archive->getPageNumber());
    std::vector<std::wstring> fichiers = archive->Extracting();
    setMedias(fichiers);
    setCounter(0);
    archive->CreateSummary();
    archive->CreateBookmark();
    //auto x = archive.getPathList();
    QString qStrFilePath2 = QString::fromWCharArray(fichiers[counter].c_str());
    //qDebug() << fichiers[counter];
    showImage(qStrFilePath2);    
};

void MainWindow::onPressPrecImage(){

    if (counter ==0)
    {
        QMessageBox msgBox;
        msgBox.setText(QString::fromLatin1("Il n'y a pas de page précédente !"));
        msgBox.exec();
        return;
    }

    counter--;
    setCounter(counter);
    medias = getMedias();
    QString qStrFilePath = QString::fromWCharArray(medias[counter].c_str());

    showImage(qStrFilePath);
    
};

void MainWindow::onPressSuivImage()
{
    if (counter == m_totalPage-1 || m_totalPage == 0)
    {
        QMessageBox msgBox;
        msgBox.setText("Il n'y a pas de prochaine page !");
        msgBox.exec();
        return;
    }

     counter++;
    setCounter(counter);
    medias = getMedias();
 
    QString qStrFilePath = QString::fromWCharArray(medias[counter].c_str());
    //QString qStrFilePath2 = QString::fromWCharArray(medias[counter+1].c_str());
    showImage(qStrFilePath);
}

void MainWindow::onPressSaveImage()
{
    if (m_graphicsScene->sceneRect().isEmpty())
        return;

    m_graphicsScene->clearSelection();
    QImage img(m_graphicsScene->sceneRect().size().toSize(), QImage::Format_RGB888);
    QPainter painter(&img);
    m_graphicsScene->render(&painter);

    QString qStrFilePath = QFileDialog::getSaveFileName(this,
            tr("Sauvegarder l'image"),
            QStandardPaths::writableLocation(QStandardPaths::CacheLocation).replace("cache", "fichier.jpg"),
            tr("JPG file (*.jpg);;PNG file (*.png);;BMP file (*.bmp)"));

    if (qStrFilePath.isEmpty())
        return;

    QImageWriter writer(qStrFilePath);
    if(!writer.canWrite())
    {
        QMessageBox msgBox;
        msgBox.setText("Impossible de sauvegarder l'image");
        msgBox.exec();
        return;
    }
    writer.write(img);

    ui->statusBar->showMessage(QString::fromLatin1("Image sauvegardée"), 0);
}

void MainWindow::onPressFitWindow()
{
    ui->m_graphicsView->viewFit();
}
void MainWindow::onPageNumberRequest(QString x) {
    if (x.isEmpty())
        return;
    int request_page = x.toInt();
    

    if (request_page >= m_totalPage + 1 || request_page <= 0)
    {

        QMessageBox msgBox;
        msgBox.setText(QString::fromLatin1("La page demandée n'existe pas"));
        msgBox.exec();
        return;
    }
    setCounter(request_page-1);
    medias = getMedias();
    QString qStrFilePath = QString::fromWCharArray(medias[request_page-1].c_str());

    showImage(qStrFilePath);

};

void MainWindow::showImage(QString qStrFilePath) {
    if (qStrFilePath.isEmpty())
        return;

    QImageReader reader(qStrFilePath);
    if (!reader.canRead())
    {
        QMessageBox msgBox;
        msgBox.setText("Impossible de lire le fichier");
        msgBox.exec();
        return;
    }
    if (!m_graphicsScene->sceneRect().isEmpty())
    {
        m_graphicsScene->clear();
    }
    QImage qimg = reader.read();
    m_graphicsScene->setSceneRect(qimg.rect());
    m_graphicsScene->addPixmap(QPixmap::fromImage(qimg));

    ui->m_graphicsView->viewFit();

    ui->statusBar->showMessage("Page : " + QString::number(counter+1) + " / " +QString::number( m_totalPage ) , 0);
}


void MainWindow::onPressGoToBookmark() {
    std::wstring chemin = medias[0];
    chemin += L"\\..\\..";
    chemin += L"\\Bookmark.txt";
    MyBookmark bm(chemin);
    counter = bm.readBookmark();
    QString qStrFilePath = QString::fromWCharArray(medias[counter].c_str());
    showImage(qStrFilePath);

};
void MainWindow::onPressAddBookmark() {
    std::wstring chemin = medias[0];
    chemin += L"\\..\\..";
    chemin += L"\\Bookmark.txt";
    MyBookmark bm(chemin);
    bm.writeBookmark(counter);
};

//void MainWindow::showImage(QString qStrFilePath, QString qStrFilePath2) {
//    if (qStrFilePath.isEmpty())
//        return;
//
//    QImageReader reader(qStrFilePath);
//    QImageReader reader2(qStrFilePath2);
//    if (!reader.canRead())
//    {
//        QMessageBox msgBox;
//        msgBox.setText("Impossible de lire le fichier");
//        msgBox.exec();
//        return;
//    }
//    if (!m_graphicsScene->sceneRect().isEmpty())
//    {
//        m_graphicsScene->clear();
//    }
//    QHBoxLayout* layout = new QHBoxLayout; // or any other layout
//    ui->m_graphicsView->setLayout(layout);
//    QPixmap myPic(qStrFilePath);
//    QPixmap myPic2(qStrFilePath2);
//    QLabel* picLabel = new QLabel;
//    QPixmap scaledPic(myPic.scaled(ui->m_graphicsView->width()/2, ui->m_graphicsView->height()/2));
//    picLabel->setPixmap(scaledPic);
//    layout->addWidget(picLabel);
//    QLabel* picLabel2 = new QLabel;
//    QPixmap scaledPic2(myPic2.scaled(ui->m_graphicsView->width() / 2, ui->m_graphicsView->height() / 2));
//    picLabel2->setPixmap(scaledPic2);
//    layout->addWidget(picLabel2);
//
//
//    QImage qimg = reader.read();
//    QImage qimg2 = reader2.read();
//    //m_graphicsScene->setSceneRect(qimg.rect());
//    m_graphicsScene->addPixmap(QPixmap::fromImage(qimg));
//    //m_graphicsScene->setSceneRect(qimg2.rect());
//    m_graphicsScene->addPixmap(QPixmap::fromImage(qimg2));
//    ui->m_graphicsView->viewFit();
//
//    ui->statusBar->showMessage("Page : " + QString::number(counter + 1) + " / " + QString::number(m_totalPage), 0);
//
//};