// Assignment #0, CPSC 1160
// Describe what the code is doing in your own words.
// by #your name here#

#include <iostream>
#include <fstream>

int eqexp()
{
	int a,b,c,d;
	std::ifstream fin;
	// MacOS may need to use an absolute path
	fin.open("/Users/mao/Desktop/mao/mao_LC/LC1160_2022s/src/Assignments/EqTest.txt");// MacOs may not support a relative path
	//Windows
	//fin.open("EqTest.txt");

	if (fin.is_open())
	{
		while ( !fin.eof() )
		{
			fin >> a >> b >> c >> d;
			std::cout << a << " " << b<< " " << c<< " " << d << std::endl;
		}

	}
	fin.close();

	return 0;
}
