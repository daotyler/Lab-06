/// @file
/// @brief This is Circle.h file
/// 
/// This file includes Circle class
/// @author Tyler and Henil
/// @version 1.0
/// @date 3/23
#pragma once
#include "Shape.h"

/// @brief This is Circle class
///
/// This is a derived class of Car
class Circle:public Shape
{
	int diameter;
public:
	
	/// @brief This is the default constructor of Circle class
	/// @param diameter 
	Circle(int diameter);

	/// @brief This is print() function
	///
	/// This will print a circle, this is an overiding function
	void print();

	/// @brief This is getArea() function
	/// 
	/// This function will calculate the area of the circle, this is an overiding function
	/// @return an int variable which is the area of the circle
	int getArea();
};

