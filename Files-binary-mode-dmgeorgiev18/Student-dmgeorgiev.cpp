#include "Student-dmgeorgiev.h"

char* STUDENT::getFullName()
{
    char* result = new char[sizeof(firstName) + sizeof(lastName) + sizeof(char)];
    return firstName;
}
