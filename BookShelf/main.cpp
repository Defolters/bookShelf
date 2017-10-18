#include "Library.h"
#include "Book.h"
#include <iostream>

int main()
{
    Library library;
    if (library.addBook("Somebody", "Chaos", 1995))
    {
        std::cout << "library.addBook(\"Somebody\", \"Chaos\", 1995) was done" << std::endl;
    }
    else
    {
        std::cout << "library.addBook(\"Somebody\", \"Chaos\", 1995) error" << std::endl;

    }


    Book book = library.getBook("Chaos");
    if (book.getTitle() == "Chaos")
    {
        std::cout << "library.getBook(\"Chaos\") was done" << std::endl;

    }
    else if (book.getTitle() == "ERROR")
    {
        std::cout << "library.getBook(\"Chaos\") error" << std::endl;

    }



    std::vector<Book> vectorA = library.getAuthorList("Somebody");
    if ((!vectorA.empty()) && (vectorA[0].getAuthor() == "Somebody"))
    {
        std::cout << "library.getAuthorList(\"Somebody\") was done" << std::endl;
    }
    else
    {
        std::cout << "library.getAuthorList(\"Somebody\") error" << std::endl;
    }
    

    std::vector<Book> vectorY = library.getYearList(1997);
    if ((!vectorY.empty()) && (vectorY[0].getYear() == 1997))
    {
        std::cout << "library.getYearList(1997) error" << std::endl;
    }
    else
    {
        std::cout << "library.getYearList(1997) was done" << std::endl;
    }



    std::set<std::string> authors = library.getAuthors();
    if (authors.find("Somebody") != authors.end())
    {
        std::cout << "library.getAuthors() was done" << std::endl;
    }
    else
    {
        std::cout << "library.getAuthors() error" << std::endl;

    }

    if (library.deleteAuthor("Somebody"))
    {
        std::cout << "library.deleteAuthor(\"Nameless\") was done" << std::endl;
    }
    else
    {
        std::cout << "library.deleteAuthor(\"Nameless\") error" << std::endl;
    }


    std::vector<Book> vectorB = library.getAuthorList("Somebody");
    if ((!vectorB.empty()) && (vectorB[0].getAuthor() == "Somebody"))
    {
        std::cout << "library.getAuthorList(\"Somebody\") error" << std::endl;
    }
    else
    {
        std::cout << "library.getAuthorList(\"Somebody\") was done" << std::endl;
    }

    std::cin.get();
    return 0;
}
