#include <iostream>
#include <vector> 
#include <string>
#include <fstream>
#include "students-hsabumelih18.h"

using namespace std;

int main()
{
	fstream file;
	file.open("hsabumelih18", ios::out | ios::binary | ios::trunc);
	if (file.is_open())
	{
		file.close();
	}
}

