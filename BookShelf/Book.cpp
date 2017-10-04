#include "stdafx.h"
#include "Book.h"


Book::Book()
{
}


Book::~Book()
{
}

bool Book::setAuthor(std::string & author_)
{
    return false;
}

bool Book::setTitle(std::string & title_)
{
    return false;
}

bool Book::setYear(int & year_)
{
    return false;
}

std::string Book::getAuthor()
{
    return std::string();
}

std::string Book::getTitle()
{
    return std::string();
}

int Book::getYear()
{
    return 0;
}
