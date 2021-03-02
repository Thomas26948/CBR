#include "History.h"
#include <QDebug>


namespace fs = std::filesystem;

void MyHistorique::setName()
{
    std::vector<std::string> name;
    //On pourra ajouter une limite à ces dossiers afin d'avoir un affichage plus "propre"
    for (auto& p : fs::directory_iterator("comics")) {
        name.push_back(p.path().string());
    }
    m_name = name;
};

std::vector<std::string> MyHistorique::getName() {
    return m_name;
}

std::vector<std::wstring> MyHistorique::showFiles(int num) {
    std::string path = m_name[num];
    path += "\\images";
    std::vector<std::wstring> files;
    for (auto& p : fs::directory_iterator(path)) {
        files.push_back(p.path().wstring());
    }
    return files;
}


MyHistorique::MyHistorique()
{}

MyHistorique::MyHistorique(const MyHistorique& anotherHistorique):
    m_name(anotherHistorique.m_name)
{}

MyHistorique::~MyHistorique()
{}