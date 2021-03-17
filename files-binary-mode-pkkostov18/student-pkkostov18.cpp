#include "student-pkkostov18.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

char* STUDENT::getFullName()
{
    char* result = new char[sizeof(firstName) + sizeof(lastName) + sizeof(char)];
    // TODO: copy fullname + ' ' + lastName
    return firstName;
}

int main()
{
    fstream file;
    file.open("pkkostov18.bin", ios::out | ios::binary | ios::trunc);

    if (file.is_open())
    {
        int a = 65;
        for (int i = 0; i < 6; i++)
        {
            file.write((const char*)&a, sizeof(a));
        }
        file.close();
    }
}