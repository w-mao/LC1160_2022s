/*
 * PolymorphismDemo.cpp
 *
 *  Created on: Feb 20, 2022
 *      Author: mao
 */


#include <iostream>
#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"

using namespace std;

void displayGeometricObject(const GeometricObject& g)
{
	cout << g.toString() << endl;
}

int polymorphismDemo()
{
	GeometricObject geometricObject;
	displayGeometricObject(geometricObject);

	CircleO circle(5);
	displayGeometricObject(circle);

	Rectangle rectangle(4, 6);
	displayGeometricObject(rectangle);

	return 0;
}

