#include "decomp.h"

using namespace  bit7z;

//____________________________________________________________________________________________________


std::wstring MyArchive::NewDirectory() {
    std::wstring comic_books = L"comics\\";
    comic_books += m_title;
    wchar_t* ptr = _wcsdup(comic_books.c_str());
    if (_wmkdir(ptr) == 0) {
        std::cout << "Le dossier" << *ptr << "crée avec succès." << std::endl;
        m_path_images = comic_books;
    }
    else {
        std::cout << "Le dossier" << ptr << "n'a pas pu être crée" << std::endl;

    }
    free(ptr);
    comic_books += L"\\images";
    wchar_t* ptr2 = _wcsdup(comic_books.c_str());
    if (_wmkdir(ptr2) == 0) {
        std::cout << "Le dossier" << ptr2 << "crée avec succès." << std::endl;
        m_path_images = comic_books;
    }
    else {
        std::cout << "Le dossier" << ptr2 << "n'a pas pu être crée" << std::endl;

    }
    return comic_books;
};

int MyArchive::RemoveDirectory() {
    std::wstring comic_books = L"comics\\";
    comic_books += m_title;

    wchar_t* ptr = _wcsdup(comic_books.c_str());
    char* ptr_char = (char*)ptr;
    if (_rmdir(ptr_char) == 0) {
        free(ptr);
        return 0;
    }
    else {
        std::cout << "Le dossier" << ptr << "n'a pas pu être supprimé" << std::endl;
        return -1;
    }
};

void MyArchive::CreateFile(std::wstring File) {
    std::filesystem::path p = m_path_images;
    p = p.parent_path();
    File += L".txt";
    p.append(File);
    std::ofstream outfile(p);
    outfile << "Init" << std::endl;
    outfile.close();
};


void MyArchive::CreateSummary() {
    CreateFile(L"Summary");
};

void MyArchive::CreateBookmark() {
    CreateFile(L"Bookmark");
};

int MyArchive::getPageNumber() {
    return m_pageNumber;
};



//______________________________________________________________________________________

std::vector<std::wstring> MyZipArchive::Extracting() {
    std::vector<std::wstring> fichier;
    try
    {
        BitExtractor extractor{ lib, BitFormat::Zip };
        std::wstring destination = NewDirectory();
        std::wstring source = m_path;
        extractor.extract(source, destination); //extracting a simple archive

        //MyArchive::Extracting();

        BitArchiveInfo arc{ lib, m_path, BitFormat::Zip };
        auto arc_items = arc.items();
        for (auto& item : arc_items) {
            if (item.extension().compare(L"") != 0) {
                std::wstring scan = destination;
                scan += L"\\";
                scan += item.name();
                fichier.push_back(scan);
            }
            
        }
        //Parfois l'extraction ne permet pas d'obtenir un vector d'en l'ordre alphabétique. sort() permet de régler ce problème
        sort(fichier.begin(), fichier.end());
        return fichier;

    }
    catch (const BitException& ex)
    {
        std::cout << ex.what();
        return fichier;
    }


};

void MyZipArchive::setPageNumber() {
    try {
        BitArchiveInfo arc{ lib, m_path, BitFormat::Zip };
        m_pageNumber = arc.filesCount();
    }
    catch (const BitException& ex) {
        std::cout << ex.what() << std::endl;
    }
};

void MyZipArchive::setFileSize() {
    try {
        BitArchiveInfo arc{ lib, m_path, BitFormat::Zip };
        m_size = arc.size();
    }
    catch (const BitException& ex) {
        std::cout << ex.what() << std::endl;
    }
};

std::vector<bit7z::BitArchiveItem> MyZipArchive::getPathList() {
    try {
        BitArchiveInfo arc{ lib, m_path, BitFormat::Zip };
        auto arc_items = arc.items();
        return arc_items;
    }
    catch (const BitException& ex) {
        std::cout << ex.what() << std::endl;
    }
}


//__________________________________________________________________________________________________

void MyRarArchive::setPageNumber() {

        try {
            BitArchiveInfo arc{ lib, m_path, BitFormat::Rar };
            m_pageNumber = arc.filesCount();

        }
        catch (const BitException& ex) {
            std::cout << ex.what() << std::endl;
        }
 };

void MyRarArchive::setFileSize() {
        try {
            BitArchiveInfo arc{ lib, m_path, BitFormat::Rar };
            m_size = arc.size();
        }
        catch (const BitException& ex) {
            std::cout << ex.what() << std::endl;
        }
    };

std::vector<bit7z::BitArchiveItem> MyRarArchive::getPathList() {
        try {
            BitArchiveInfo arc{ lib, m_path, BitFormat::Rar };
            auto arc_items = arc.items();

            return arc_items;
        }
        catch (const BitException& ex) {
            std::cout << ex.what() << std::endl;

        }
    };

std::vector<std::wstring> MyRarArchive::Extracting() {
        std::vector<std::wstring> fichier;
        try
        {
            BitExtractor extractor{ lib, BitFormat::Rar };
            std::wstring destination = NewDirectory();
            std::wstring source = m_path;
            extractor.extract(source, destination); //extracting a simple archive

            //MyArchive::Extracting();

            BitArchiveInfo arc{ lib, m_path, BitFormat::Rar };
            auto arc_items = arc.items();
            for (auto& item : arc_items) {
                if (item.extension().compare(L"") != 0) {
                    std::wstring scan = destination;
                    scan += L"\\";
                    //scan += item.name();
                    scan += item.path();
                    fichier.push_back(scan);
                }
            }
            //Parfois l'extraction ne permet pas d'obtenir un vector d'en l'ordre alphabétique. sort() permet de régler ce problème
            sort(fichier.begin(), fichier.end());
            return fichier;

        }
        catch (const BitException& ex)
        {
            std::cout << ex.what();
            return fichier;
        }


 };

std::shared_ptr<MyArchive> CreateArchive(std::wstring chemin) {

    std::wstring ext = std::filesystem::path(chemin).extension();
    std::wstring titre = std::filesystem::path(chemin).stem();

    if (ext == L".cbz") return std::shared_ptr<MyArchive>(new MyZipArchive(chemin, titre));
    if (ext == L".cbr") return std::shared_ptr<MyArchive>(new MyRarArchive(chemin, titre));
    return std::shared_ptr<MyArchive>();
};

//____________________________________________________________________________________________________
