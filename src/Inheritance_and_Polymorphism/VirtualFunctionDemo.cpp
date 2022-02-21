/*
 * VirtualFunctionDemoUsingPointer.cpp
 *
 *  Created on: Feb 20, 2022
 *      Author: mao
 */

#include <iostream>
#include "GeometricObject.h" // toString() is defined virtual now
#include "DerivedCircle.h"
#include "DerivedRectangle.h"

using namespace std;

void displayGeometricObject(const GeometricObject* g)
{
	cout << (*g).toString() << endl;
}



void displayGeometricObjectPassByValue(GeometricObject g)
{
	cout << g.toString() << endl;
}


int virtualFunctionDemo()
{
	GeometricObject geometricObject;
	CircleO circle(5);
	Rectangle rectangle(4, 6);

	displayGeometricObject(&geometricObject);
	displayGeometricObject(&circle);
	displayGeometricObject(&rectangle);

	displayGeometricObjectPassByValue(GeometricObject());
	displayGeometricObjectPassByValue(CircleO(5));
	displayGeometricObjectPassByValue(Rectangle(4, 6));

	return 0;
}
