#include "stdafx.h"
#include "Library.h"
#include <algorithm>

Library::Library()
{

}

bool Library::addBook (std::string name, int year, std::string author)
{
    Book temp(author, name, year);
    books.push_back(temp);
    return true;
}

std::vector<Book> Library::getAuthorList(std::string author)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getAuthor() == author)
            ret.push_back(bk);
    return ret;
}

std::vector<Book> Library::getYearList(int year)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getYear() == year)
            ret.push_back(bk);
    return ret;
}

std::vector<Book> Library::getNameList(std::string name)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getTitle() == name)
            ret.push_back(bk);
    return ret;

}

bool Library::deleteBook(std::string name)
{
    auto pos = std::find_if(books.begin(), books.end(), [&](const Book bk)(return bk.getTitle() == name));
}

Library::~Library()
{

}
