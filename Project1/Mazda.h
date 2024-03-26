/// @file
/// @brief This is Mazda.h file
/// 
/// This file includes Mazda class
/// @author Tyler and Henil
/// @version 1.0
/// @date 3/23
#pragma once
#include "Shape.h"
#include "Car.h"

/// @brief This is Mazda class
///
/// This is a derived class of Car
class Mazda:public Car
{
public:
	/// @brief This is print() function
	///
	/// This function will print shape of a car, this is an overiding function
	/// @returns This function returns void
	void print();
	/// @brief This is print() function
	///
	/// This will print a message "Driving a car"
	/// @returns This function returns void
	void drive();
};

