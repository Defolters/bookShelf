#include "Book.h"


Book::Book(const std::string& author_, const std::string& title_, const int& year_)
{
    author = author_;
    title = title_;
    year = year_;
}

Book::~Book()
{
}

bool Book::setAuthor(const std::string& author_)
{
    author = author_;
    return true;
}

bool Book::setTitle(const std::string& title_)
{
    title = title_;
    return true;
}

bool Book::setYear(const int& year_)
{
    year = year_;
    return true;
}

std::string Book::getAuthor() const
{
    return author;
}

std::string Book::getTitle() const
{
    return title;
}

int Book::getYear() const
{
    return year;
}

bool Book::operator<(const Book & book) const
{
    if (this->getTitle() < book.getTitle())
    {
        return true;
    }
    else
    {
        return false;
    }
}
