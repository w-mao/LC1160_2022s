// Assignment #0, CPSC 1160
// #descibe what the code is doing in your own words#
// by #your name here#
// 5 points for comments

#include <iostream>
#include <fstream>

int eqexpAns()
{
	int a,b,c,d;
	int pre_item;
	std::ifstream fin;
	// MacOS may need to use an absolute path
	fin.open("/Users/mao/Desktop/mao/mao_LC/LC1160_2022s/src/Assignments/EqTest.txt");// MacOs may not support a relative path
	//Windows
	//fin.open("EqTest.txt");

	if (fin.is_open())
	{
		while ( !fin.eof() )
		{
			pre_item = 0;
			fin >> a >> b >> c >>d;
			std::cout << "(" << a << "x";
			if (b < 0)
				std::cout << b << "y)(" << c<< "x";
			else
				std::cout << "+" << b << "y)(" << c<< "x";

			if (d < 0)
				std::cout<< d << "y)" << std::endl;
			else if (d >= 0)
				std::cout<< "+" << d << "y)" << std::endl;



			if (a * c == 1){
				std::cout << "x^2";
				pre_item ++;
			}else if (a * c == -1){
				std::cout << "-x^2";
				pre_item ++;
			}else if (a * c != 0){
				std::cout << a * c << "x^2";
				pre_item ++;
			}

			if (a * d + b * c == 1){
				if (pre_item > 0) std::cout << "+";
				std::cout << "xy";
				pre_item++;
			}else if (a * d + b * c == -1){
				std::cout << "-xy";
				pre_item++;
			}else if (a * d + b * c > 0){
				if (pre_item > 0) std::cout << "+";
				std::cout << a * d + b * c<< "xy";
				pre_item++;

			}else if (a * d + b * c < 0){
				std::cout << a * d + b * c<< "xy";
				pre_item++;
			}


			if(b * d == 1){
				if (pre_item > 0) std::cout << "+";
				std::cout << "y^2";
				pre_item++;

			}else if (b * d == -1){

				std::cout << "-y^2";
				pre_item++;
			}else if (b * d > 0){

				if (pre_item > 0) std::cout << "+";
				std::cout << b * d << "y^2";
				pre_item++;
			}else if (b * d < 0){
				std::cout << b * d << "y^2";
				pre_item++;
			}
			//std::cout<< "pre_item: " << pre_item << std::endl;

			if (pre_item == 0)
				std::cout << "0" << std::endl;
			else
				std::cout << std::endl;
		}
	}
	fin.close();

	return 0;
}
