#include "Library.h"
#include "Book.h"
#include <iostream>

int main()
{
    Library library;
    library.addBook("Somebody", "Chaos", 1995);
    library.addBook("Somebody", "Heaven", 1997);
    library.addBook("Somebody", "Hell", 1999);
    library.addBook("Nameless", "Titleless", 1997);

    Book book = library.getBook("Chaos");
    std::cout << "library.getBook(\"Chaos\")\n"
        << "Author: " << book.getAuthor()
        << "Title: " << book.getTitle()
        << "Year: " << book.getYear() << std::endl;


    std::vector<Book> vectorA = library.getAuthorList("Somebody");
    std::cout << "\nlibrary.getAuthorList(\"Somebody\")" << std::endl;
    for (Book bk : vectorA)
    {
        std::cout << bk.getAuthor() << " " << bk.getTitle() << " " << bk.getYear() << std::endl;
    }

    std::vector<Book> vectorY = library.getYearList(1997);
    std::cout << "\nlibrary.getYearList(1997)" << std::endl;
    for (Book bk : vectorY)
    {
        std::cout << bk.getAuthor() << " " << bk.getTitle() << " " << bk.getYear() << std::endl;
    }

    return 0;
}
