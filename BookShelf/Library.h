#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>
#include <list>
#include "Book.h"

class Library
{
    private:
        const int RESERVE_BOOKS = 100;
        std::list<Book> books;
    public:
        Library();
        bool addBook (std::string name, int year, std::string author);
        Book getBook(std::string name);
        std::vector<Book> getAuthorList(std::string author);
        std::vector<Book> getYearList(int year);
        std::vector<Book> getNameList(std::string name);
        bool deleteBook(std::string name);

        virtual ~Library();

};

#endif // LIBRARY_H
