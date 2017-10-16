#include "Book.h"


Book::Book(std::string author_, std::string title_, int year_)
{
    author = author_;
    title = title_;
    year = year_;
}

Book::~Book()
{
}

bool Book::setAuthor(std::string & author_)
{
    author = author_;
    return true;
}

bool Book::setTitle(std::string & title_)
{
    title = title_;
    return true;
}

bool Book::setYear(int & year_)
{
    year = year_;
    return true;
}

std::string Book::getAuthor()
{
    return author;
}

std::string Book::getTitle()
{
    return title;
}

int Book::getYear()
{
    return year;
}
