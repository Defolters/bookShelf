#ifndef TESTING_H
#define TESTING_H
#include <exception>
//!  A class that implements exception. 
/*!
This class contain DoesntExistException, which thrown if no such elem in library or vector is empty
*/
class DoesntExistException : public std::exception
{
public:
    virtual const char* what() const throw()
    {
        return "ERROR: there is vector is empty or no such elem in library";
    }
};
#endif // !TESTING_H
