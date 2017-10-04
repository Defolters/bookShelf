#include "Library.h"
#include <algorithm>

Library::Library()
{
    books.reserve(RESERVE_BOOKS);
}

bool Library::addBook (std::string name, int year, std::string author)
{
    Book temp(author, name, year);
    books.push_back(temp);
    return true;
}

std::vector<Book> Library::GetAuthorList(std::string author)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getAuthor() == author)
            ret.push_back(bk);
    if (ret.size() == 0)
        return NULL;
    else
        return ret;
}

std::vector<Book> Library::GetYearList(int year)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getYear() == year)
            ret.push_back(bk);
    if (ret.size() == 0)
        return NULL;
    else
        return ret;
}

std::vector<Book> Library::GetNameList(std::string name)
{
    std::vector<Book> ret;
    for (Book bk : books)
        if (bk.getTitle() == name)
            ret.push_back(bk);
    if (ret.size() == 0)
        return NULL;
    else
        return ret;
}

bool Library::DeleteBook(std::string name)
{
    auto pos = std::find_if(books.begin(), books.end(), [&] (const Book bk)(return bk.getTitle() == name));
}

Library::~Library()
{

}
