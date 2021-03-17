
#include <iostream>
#include<vector>
#include<string>
#include<fstream>
#include "student-pgpetkov18.h"
using namespace std;
int main()
{
    fstream file;
    file.open("pgpetkov18.bin", ios::out | ios::binary | ios::trunc);
    if (file.is_open())
    {
        file.close();
    }
}

