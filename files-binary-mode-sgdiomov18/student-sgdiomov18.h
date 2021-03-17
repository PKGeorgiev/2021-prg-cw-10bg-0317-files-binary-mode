#pragma once

struct STUDENT
{
	char firstName[20];
	char lastName[20];
	int age;
	int grade;
		char* getFullName()
		{
			char* result = new char[sizeof(firstName) + sizeof(lastName) + sizeof(char)];
			return firstName;
		}


};