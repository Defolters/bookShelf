#include "Library.h"
#include <algorithm>

Library::Library()
{

}

Book Library::getBook(std::string name)
{
    for (auto pos = books.begin(); pos != books.end();pos ++)
        if (pos->getTitle() == name)
             return (*pos);
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
    //auto pos = std::find_if(books.begin(), books.end(), [&name](const Book &arg) { return arg.getTitle() == name; });

    for (auto pos = books.begin(); pos != books.end();pos ++)
    {
        if (pos->getTitle() == name)
        {
             books.erase(pos);
             return true;
        }
    }
    return false;
}

Library::~Library()
{

}
