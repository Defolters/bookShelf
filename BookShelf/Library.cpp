#include "Library.h"
#include <algorithm>

Library::Library()
{}

Book Library::getBook(std::string title)
{
    for (auto pos = books.begin(); pos != books.end();pos ++)
        if (pos->getTitle() == title)
             return (*pos);
    throw;
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
    //auto pos = std::find_if(books.begin(), books.end(), [&name](const Book &arg) { return arg.getTitle() == name; });

    for (auto pos = books.begin(); pos != books.end();pos ++)
    {
        if (pos->getTitle() == title)
        {
             books.erase(pos);
             return true;
        }
    }
    return false;
}

Library::~Library()
{}
