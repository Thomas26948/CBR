#include "Bookmark.h"


MyBookmark::MyBookmark(){}

MyBookmark::MyBookmark(std::wstring path): m_path(path){}

MyBookmark::MyBookmark(const MyBookmark& anotherBookmark): m_path(anotherBookmark.m_path),m_bm(anotherBookmark.m_bm){}


MyBookmark::~MyBookmark()
{}

void MyBookmark::writeBookmark(int page) {
	std::ofstream myfile(m_path);
	if (myfile.is_open())
	{
		myfile << page;
		myfile.close();
	}
	else std::cout << "Impossible d'ouvrir le fichier";

}

int MyBookmark::readBookmark() {
	std::string ligne;
	std::ifstream myfile(m_path);
	if (myfile.is_open())
	{
		std::getline(myfile, ligne);
		myfile.close();
		return stoi(ligne);
	}
	else {
		std::cout << "Impossible d'ouvrir le fichier";
	}
	return -1;	
}