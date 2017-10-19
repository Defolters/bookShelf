#include "Library.h"
#include <algorithm>
#include "Testing.h"

Library::Library()
{}

Book Library::getBook(const std::string title)
{
    auto pos = books.begin();
    for (; pos != books.end();pos++)
        if (pos->getTitle() == title)
             return (*pos);

    if (pos == books.end())
    {
        throw DoesntExistException();
    }
}

bool Library::addBook(const std::string author, const std::string title, const int year)
{
    Book temp(author, title, year);
    books.push_back(temp);
    return true;
}

std::vector<Book> Library::getAuthorList(const std::string author)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getAuthor() == author)
            ret.push_back(bk);

    if (ret.size() == 0)
    {
        throw DoesntExistException();
    }
    return ret;
}

std::vector<Book> Library::getYearList(const int year)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getYear() == year)
            ret.push_back(bk);

    if (ret.size() == 0)
    {
        throw DoesntExistException();
    }
    return ret;
}

std::vector<Book> Library::getTitleList(const std::string title)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getTitle() == title)
            ret.push_back(bk);

    if (ret.size() == 0)
    {
        throw DoesntExistException();
    }
    return ret;
}

bool Library::deleteBook(const std::string title)
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

std::set<std::string> Library::getAuthors()
{
    std::set<std::string> ret;
    for (Book bk : books)
        ret.insert(bk.getAuthor());

    if (ret.empty())
    {
        throw DoesntExistException();
    }
    return ret;
}

bool Library::deleteAuthor(const std::string name)
{
    bool deleted = false;
    std::vector<std::list<Book>::iterator> ptrs;
    auto pos = books.begin();
    for (; pos != books.end();pos ++)
        if (pos->getAuthor() == name)
        {
            ptrs.push_back(pos);
            deleted = true;
        }
    for (auto ptr : ptrs)
        books.erase(ptr);
    return deleted;
}

Library::~Library()
{}
