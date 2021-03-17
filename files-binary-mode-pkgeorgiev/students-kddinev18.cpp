#include "../Files-Binary-Mode-kddinev18/students-kddinev18.h"

char* STUDENT::getFullName()
{
	char* result = new char[sizeof(firstName) + sizeof(lastName) + sizeof(char)];

	return firstName;
}