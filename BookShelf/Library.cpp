#include "Library.h"
#include <algorithm>

Library::Library()
{}

Book Library::getBook(std::string title)
{
    auto pos = books.begin();
    for (; pos != books.end();pos ++)
        if (pos->getTitle() == title)
             return (*pos);
    if (pos == books.end())
    {
        std::string authorER = "ERROR";
        std::string titleER = "ERROR";
        int yearER = 0;
        Book tmp(authorER, titleER, yearER);
        return tmp;
    }
}

bool Library::addBook(std::string author, std::string title, int year)
{
    Book temp(author, title, year);
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

std::vector<Book> Library::getTitleList(std::string title)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getTitle() == title)
            ret.push_back(bk);
    return ret;
}

bool Library::deleteBook(std::string title)
{
    auto pos = std::find_if(books.begin(), books.end(), [&title](Book &arg) { return arg.getTitle() == title; });
    if (pos != books.end())
    {
        books.erase(pos);
        return true;
    }
    else
        return false;
}

Library::~Library()
{}
