#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "student-satodorov18.h"

using namespace std;

int main()
{
    fstream file;
    file.open("satodorov18.bin", ios::out or ios::binary or ios::trunc);
    if (file.is_open())
    {
        int a = 65;
        file.write((const char*)&a, sizeof(a));

        file.close();
    }
}
