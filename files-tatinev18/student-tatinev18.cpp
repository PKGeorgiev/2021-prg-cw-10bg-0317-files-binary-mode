#include "student-tatinev.h"

char* STUDENT::getFullName()
{
	char* result = new char[sizeof(firstName) + sizeof(lastName) + sizeof(char)];
	// TODO: copy fullname + ' ' + lastName
	return firstName;
}
