/// @file
/// @brief This is Shape.h
/// 
/// This file includes Shape class
/// @author Tyler and Henil
/// @version 1.0
/// @date 3/23

#pragma once
/// @brief This is Shape class
///
/// This is a derived class of Car
class Shape
{
public:
	/// @brief This is getArea() function
	/// 
	/// This function will calculate the area of the circle, this is an overiding function
	/// @return an int variable which is the area of the circle
	virtual void print();
};

