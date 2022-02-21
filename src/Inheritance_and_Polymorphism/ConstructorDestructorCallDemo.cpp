/*
 * ConstructorDestructorCallDemo.cpp
 *
 *  Created on: Feb 20, 2022
 *      Author: mao
 */

#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Performs tasks for Person's constructor" << endl;
	}

	~Person()
	{
		cout << "Performs tasks for Person's destructor" << endl;
	}
};

class Employee: public Person // extends Person
{
public:
	Employee()
	{
		cout << "Performs tasks for Employee's constructor" << endl;
	}

	~Employee()
	{
		cout << "Performs tasks for Employee's destructor" << endl;
	}
};

class Faculty: public Employee// extends Employee
{
public:
	Faculty()
	{
		cout << "Performs tasks for Faculty's constructor" << endl;
	}

	~Faculty()
	{
		cout << "Performs tasks for Faculty's destructor" << endl;
	}
};

int constructorDestructorCallDemo()
{
	Faculty faculty;

	return 0;
}



