#ifndef BOOKMARK_H
#define BOOKMARK_H

//Cette classe permet de gérer les marques pages :
//Dans comics/*nom de la bd* , il y a un fichier Bookmark.txt qui stocke un nombre
//Ce nombre correspond au marque page. Ainsi, modifier le marque page consiste à écrire / lire dans ce fichier
#include <iostream>
#include <string>
#include <fstream>

class MyBookmark
{
private:
	//chemin de Bookmark.txt
	std::wstring m_path;
	//valeur du marque page
	int m_bm;

public:
	MyBookmark();
	MyBookmark(std::wstring path);
	MyBookmark(const MyBookmark& anotherBookmark);

	~MyBookmark();

	void writeBookmark(int page);
	int readBookmark();



};














#endif

