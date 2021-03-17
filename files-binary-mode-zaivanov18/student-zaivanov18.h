#pragma once

struct STUDENT
{
	char firstName[50];
	char lastName[50];
	int age;
	int grade;

	char* getFullName();
};
