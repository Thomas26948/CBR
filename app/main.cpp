#include <QApplication>
#include <QDebug>
//#include <QTranslator>
//#include <QLocale>
//#include <QLibraryInfo>
//#include<QTextCodec>
#include <curl\curl.h>

#include <iostream>

#include "mainwindow.h"
#include<decomp.h>
#include "History.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //qDebug() << "C++ Style Debug Message";

    return a.exec();
}


//#define CURL_STATICLIB
//#include <curl/curl.h>
//
//int main()
//{
//    CURL* curl;
//
//    curl = curl_easy_init();
//    curl_easy_cleanup(curl);
//
//    return 0;
//}