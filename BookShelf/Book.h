/*!
\class Book
\brief A class that contain book.

Just book
*/
/*!
\fn bool setAuthor(std::string& author_);
\brief Set author
\param[in] author_ Name of author
\return bool
*/

/*!
\fn bool setTitle(std::string& title_);
\brief Serious hash function
\param[in] title_ Title of the book
\return bool
*/
#ifndef BOOK
#define BOOK
#include <string>

class Book
{
public:
    Book();
    ~Book();
    bool setAuthor(std::string& author_);
    bool setTitle(std::string& title_);
    bool setYear(int& year_);
    std::string getAuthor();
    std::string getTitle();
    int getYear();

private:
    std::string author;
    std::string title;
    int year;
};
#endif // BOOK