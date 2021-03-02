#ifndef DECOMP_H
#define DECOMP_H

#include <QDebug>

#include<iostream>
#include<filesystem>
#include<fstream>
#include<string>
#include<vector>
#include<map>

//bibliothèque bit7z
#include<bitexception.hpp>
#include<bitcompressor.hpp>
#include<bitextractor.hpp>
#include "bitarchiveinfo.hpp"


//Pour utiliser _mkdir
#include <direct.h>

using namespace  bit7z;

//____________________________________________________________________________________________________


class MyArchive {
protected:

    //On utilise des wstring car cela permet d'utiliser des widecaracter (unicode)
    std::wstring m_path;
    //nombre de page de notre livre
    int m_pageNumber;
    //titre du livre
    std::wstring m_title;
    //vecteur des paths des images
    std::vector<std::wstring> m_files;
    int m_size; //taille du dossier en byte
    std::wstring m_path_images;


public:
  /*  MyArchive(){}
    MyArchive(std::wstring path) : m_path(path) {}
    MyArchive(std::wstring path, std::wstring title) : m_path(path), m_title(title) { m_pageNumber = 0; }
    MyArchive(std::wstring path, int pageNumber) : m_path(path), m_pageNumber(pageNumber) {}
    MyArchive(std::wstring path, int pageNumber, std::wstring title) : m_path(path), m_pageNumber(pageNumber), m_title(title) {}
    MyArchive(std::wstring path, int pageNumber, std::wstring title, std::vector<std::wstring> files,int size, std::wstring path_images): m_path(path), m_pageNumber(pageNumber),
        m_title(title), m_files(files), m_size(size),m_path_images(path_images)
    {}
    MyArchive(const MyArchive& anotherArchive):
        m_path(anotherArchive.m_path), m_pageNumber(anotherArchive.m_pageNumber), m_title(anotherArchive.m_title), m_files(anotherArchive.m_files),m_size(anotherArchive.m_size),
        m_path_images(anotherArchive.m_path_images)
    {}*/
    //~MyArchive(){}

    Bit7zLibrary lib{ L"bit7z-master\\7z.dll" };
    //Il n'existe pas de constructeur par defaut pour BitExtractor, on l'initialise comme un Rar, qu'on modifiera dans les classes dérivées
    BitExtractor extractor{ lib, BitFormat::Rar };

    //Ajouter la fonction compressing pour permettre de gagner de la place en mémoire :
    // On pourra compresser les fichiers en quittant l'application
    void Compressing();
    //fonction d'extraction d'archive qui renvoit un vecteur contenant les paths de toutes les images
    virtual std::vector<std::wstring> Extracting() = 0;


    //Creation d'un nouveau dossier dans comis/ où l'on stocke les livres
    std::wstring NewDirectory();



    // 0 signifie que le repertoire a bien été supprimé
    int RemoveDirectory();

    void CreateFile(std::wstring File);

    //Creer un fichier summary.txt
    void CreateSummary();
   
    //Creer un fichier bookmark.txt
    void CreateBookmark();

    void print() {
        std::cout << m_pageNumber << "pagenumber" << std::endl;
    };
   
    virtual void setPageNumber() = 0;
    int getPageNumber();
    //void setFileSize();


};




//____________________________________________________________________________________________

class MyZipArchive : public MyArchive {
public:
    /*MyZipArchive():
    MyArchive(){}*/
    MyZipArchive(std::wstring path, std::wstring title) { m_path = path; m_title = title;}
    /*MyZipArchive(std::wstring path, int pageNumber, std::wstring title):
        MyArchive(path, pageNumber, title) {}
    MyZipArchive(std::wstring path, std::wstring title) :
        MyArchive(path, title) {}
    MyZipArchive(const MyZipArchive& anotherZipArchive) : MyArchive(anotherZipArchive) {}*/

    ~MyZipArchive() {}

    std::vector<std::wstring> Extracting();
    
    void setPageNumber();

    void setFileSize();

    //renvoi un vecteur contenant pour chaque fichiers ses caractéristiques
    std::vector<bit7z::BitArchiveItem> getPathList();

};

//__________________________________________________________________________________________________


class MyRarArchive : public MyArchive {
public:
   /* MyRarArchive() :
        MyArchive() {}

    MyRarArchive(std::wstring path, int pageNumber, std::wstring title) :
        MyArchive(path, pageNumber, title) {}
    MyRarArchive(std::wstring path, std::wstring title) :
        MyArchive(path, title) {}
    MyRarArchive(const MyRarArchive& anotherRarArchive): MyArchive(anotherRarArchive) {}
    ~MyRarArchive() {}*/
    MyRarArchive(std::wstring path, std::wstring title) { m_path = path; m_title = title; }



    std::vector<std::wstring> Extracting();

    void setPageNumber();

    void setFileSize();

    std::vector<bit7z::BitArchiveItem> getPathList();


};

std::shared_ptr<MyArchive> CreateArchive(std::wstring chemin);

//____________________________________________________________________________________________________


#endif