#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>


#include <iostream>
#include <vector>

#include<decomp.h>
#include "History.h"
#include "Bookmark.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setMedias(std::vector<std::wstring> vecteur);

    std::vector<std::wstring> getMedias();
    int getCounter();
    void setCounter(int x);
    std::wstring getPicturePath();

    //affiche une image à partir d'un path
    void showImage(QString);
    //void showImage(QString, QString);
    void setTotalPage(int total);

    //Retourne la classe MyArchive correspondant au type de fichier
   /* template<typename T>
    T chooseArchiveType(std::wstring ext, std::wstring chemin, std::wstring titre);*/


private:
    Ui::MainWindow *ui;
    QGraphicsScene* m_graphicsScene;
    //Correspond à la page actuellement affichée
    int counter;
    //Contient les chemins des images
    std::vector<std::wstring> medias;
    //Nombre de page du comic
    int m_totalPage;
    //Marque page
    int m_bookmark;

private slots:
    void onPressLoadImage();
    void onPressSaveImage();
    void onPressFitWindow();
    void onPressPrecImage();
    void onPressSuivImage();
    //Permet d'afficher la page qui est écrite sur l'onglet "Aller à la page"
    void onPageNumberRequest(QString);
    // en cliquant sur un élément de l'onglet historique, on ouvre une bd déjà ouverte par le passé
    //Il n'y a ainsi pas de phase de décompression, et on peut garder le marque page, sommaire.
    void onPressHistorique(QAction*); 
    void onPressGoToBookmark();
    void onPressAddBookmark();

};

#endif // MAINWINDOW_H
