#include "Library.h"
#include "Book.h"
#include "Testing.h"
#include <iostream>

int main()
{
    Library library;
    library.addBook("Somebody", "Chaos", 1995);
    library.addBook("Somebody", "Abyss", 1995);
    library.addBook("Somebody", "Hell", 1995);

    if (library.addBook("Somebody", "Chaos", 1995))
    {
        std::cout << "library.addBook(\"Somebody\", \"Chaos\", 1995) error" << std::endl;
    }
    else
    {
        std::cout << "library.addBook(\"Somebody\", \"Chaos\", 1995) was done" << std::endl;
    }

    try
    {
        Book book = library.getBook("Chaos");
        std::cout << "library.getBook(\"Chaos\") was done" << std::endl;
    }
    catch (DoesntExistException& ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout << "library.getBook(\"Chaos\") error" << std::endl;
    }


    try
    {
        std::set<Book> vectorA = library.getAuthorList("Somebody");
        std::cout << "library.getAuthorList(\"Somebody\") was done" << std::endl;
    }
    catch (DoesntExistException& ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout << "library.getAuthorList(\"Somebody\") error" << std::endl;
    }

    try
    {
        std::set<Book> vectorY = library.getYearList(1997);
        std::cout << "library.getYearList(1997) error" << std::endl;
    }
    catch (DoesntExistException& ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout << "library.getYearList(1997) was done" << std::endl;
    }

    try
    {
        std::set<std::string> authors = library.getAuthors();
        std::cout << "library.getAuthors() was done" << std::endl;
    }
    catch (DoesntExistException& ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout << "library.getAuthors() error" << std::endl;
    }

    if (library.deleteBook("Hell"))
    {
        std::cout << "library.deleteBook(\"Hell\") was done" << std::endl;
    }
    else
    {
        std::cout << "library.deleteAuthor(\"Nameless\") error" << std::endl;
    }

    if (library.deleteAuthor("Somebody"))
    {
        std::cout << "library.deleteAuthor(\"Somebody\") was done" << std::endl;
    }
    else
    {
        std::cout << "library.deleteAuthor(\"Somebody\") error" << std::endl;
    }

    std::cin.get();
    return 0;
}
