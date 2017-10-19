#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>
#include <list>
#include <set>
#include "Book.h"

//!  A class that implements library.
/*!
This class has also some methods to control library
*/
class Library
{    
public:
    //! Constructor
    Library();

    //! add book to the library
    /*!
    \param author name of author
    \param title title of the book
    \param year year of publication
    \return true or false
    */
    bool addBook (const std::string author, const std::string title, const int year);

    //! get book with specified title
    /*!
    \param title title of the book
    \return Book
    */
    Book getBook(const std::string title);

    //! get list of books with specified author's name
    /*!
    \param author name of author.
    \return vector<Book>
    */
    std::vector<Book> getAuthorList(const std::string author);

    //! get list of books with specified year of publishing
    /*!
    \param year year of publication
    \return vector<Book>
    */
    std::vector<Book> getYearList(const int year);

    //! get list of books with specified title
    /*!
    \param title title of the book
    \return vector<Book>
    */
    std::vector<Book> getTitleList(const std::string title);

    //! get list of authors
    /*!
    \return set<std::string>
    */
    std::set<std::string> getAuthors();

    //! delete book from library
    /*!
    \param title title of the book
    \return true or false
    */
    bool deleteBook(const std::string title);
    
    //! delete all books by given author
    /*!
    \param name name of the author
    \return true or false
    */
    bool deleteAuthor(const std::string name);

    //! Destructor
    ~Library();
private:
    std::list<Book> books; /*!< list of books. */ 
};

#endif // LIBRARY_H
