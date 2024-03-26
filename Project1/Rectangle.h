/// @file
/// @brief This is Rectangle.h file
/// 
/// This file includes Rectangle class
/// @author Tyler and Henil
/// @version 1.0
/// @date 3/23
#pragma once
#include "Shape.h"

/// @brief This is Rectangle class
///
/// This is a derived class of Shape
class Rectangle:public Shape
{
	int length;
	int width;
public:

	/// @brief This is the default constructor of Rectangle class
	/// @param lenght:int
	/// @param width:int
	Rectangle(int length, int width);
	/// @brief This is print() function
	///
	/// This will print a Rectangle, this is an overiding function
	void print();
	/// @brief This is getArea() function
	/// 
	/// This function will calculate the area of the rectangle, this is an overiding function
	/// @return an int variable which is the area of the rectangle
	int getArea();
};

