/*
 * DerivedCircle.cpp
 *
 *  Created on: Dec 28, 2021
 *      Author: mao
 */

#include "DerivedCircle.h"

// Construct a default circle object
CircleO::CircleO()
{
	radius = 1;
}

// Construct a circle object with specified radius
CircleO::CircleO(double radius)
{
	setRadius(radius);
}

// Construct a circle object with specified radius,
// color and filled values
CircleO::CircleO(double radius, const string& color, bool filled)
{
	setRadius(radius);
	setColor(color);
	setFilled(filled);
}

// Return the radius of this circle
double CircleO::getRadius() const
{
	return radius;

}

// Set a new radius
void CircleO::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

// Return the area of this circle
double CircleO::getArea() const
{
	return radius * radius * 3.14159;
}

// Return the perimeter of this circle
double CircleO::getPerimeter() const
{
	return 2 * radius * 3.14159;
}

// Return the diameter of this circle
double CircleO::getDiameter() const
{
	return 2 * radius;
}

// Redefine the toString function
string CircleO::toString() const
{
	return "Circle object";
}


