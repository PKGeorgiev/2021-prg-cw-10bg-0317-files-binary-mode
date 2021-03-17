#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("kalalev18.bin", ios::out | ios::binary | ios::trunc);
    if (file.is_open())
    {
        for (size_t i = 0; i < 6; i++)
        {
            file.write((const char*)&i, sizeof(i));
        }

        int a = 65;

        file.write((const char*)&a, sizeof(a));
        file.write((const char*)&a, sizeof(a));
        file.write((const char*)&a, sizeof(a));

        file.close();
    }
}