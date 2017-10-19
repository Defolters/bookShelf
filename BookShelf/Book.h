#ifndef BOOK
#define BOOK
#include <string>

//!  A class that implements book. 
/*!
This class has some getters and setters to control book.
*/
class Book
{
public:
    //! Constructor
    /*!
    Create book with specified parameters
    \param author_ name of author
    \param title_ title of the book
    \param year_ year of publication
    */
    Book(const std::string& author_, const std::string& title_, const int& year_);
    
    //! Destructor
    ~Book();

    //! set name of author
    /*!
    \param author_ name of author.
    \return true
    */
    bool setAuthor(const std::string& author_);

    //! set title of the book
    /*!
    \param title_ title of the book
    \return true
    */
    bool setTitle(const std::string& title_);

    //! set year of publication
    /*!
    \param year_ year of publication
    \return true
    */
    bool setYear(const int& year_);

    //! get name of author
    /*!
    \return name
    */
    std::string getAuthor();

    //! get title of the book
    /*!
    \return title
    */
    std::string getTitle();
    
    //! get year of publication
    /*!
    \return year
    */
    int getYear();

private:
    std::string author; /*!< name of author. */ 
    std::string title; /*!< title of the book. */ 
    int year; /*!< year of publication. */ 
};
#endif // BOOK
