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
/// This is a Base class for rectangle and circle 
class Shape
{
public:
	/// @brief This is print() function
	///
	/// This will draw a shape (circle or rectangle, depending on which class calls this function), this is an overiding function
	/// @returns This function returns void
	virtual void print();
};

