#ifndef HISTORY_H
#define HISTORY_H


#include <fstream>
#include <iostream>
#include <filesystem>
#include <vector>
#include <string>

//Cette classe permet de garder en mémoire et d'accéder plus rapidement aux bds déjà ouvertes


class MyHistorique
{
private:

    //stock le nom des bds pour les afficher par la suite
    std::vector<std::string> m_name;

public:

    MyHistorique();
    MyHistorique(const MyHistorique& anotherHistorique);
    ~MyHistorique();

    //affiche les bandes dessinées déjà ouvertes
    void setName();
    std::vector<std::string> getName();
    std::vector<std::wstring> showFiles(int num);


};









#endif
