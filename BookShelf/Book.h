/*!
\class Book
\brief A class that contain book.

Just book
*/
#ifndef BOOK
#define BOOK
#include <string>

class Book
{
public:
    //! Constructor
    /*!
    \param std::string& author_.
    \param std::string& title_
    \param int& year_
    \return The test results
    */
    Book(std::string& author_, std::string& title_, int& year_);
    //! Constructor
    ~Book();
    //! setAuthor
    /*!
    \param author_ name of author.
    \return true
    */
    bool setAuthor(std::string& author_);
    bool setTitle(std::string& title_);
    bool setYear(int& year_);
    const std::string getAuthor();
    const std::string getTitle();
    const int getYear();

private:
    std::string author;
    std::string title;
    int year;
};
#endif // BOOK