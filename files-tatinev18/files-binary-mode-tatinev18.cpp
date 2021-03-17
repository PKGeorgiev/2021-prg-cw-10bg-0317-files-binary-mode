#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("tatinev.bin", ios::out | ios::binary | ios::trunc);
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

