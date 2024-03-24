/// @file
/// @brief This is Car.h file
/// 
/// This file includes Car class
/// @author Tyler and Henil
/// @version 1.0
/// @date 3/23

#pragma once
#include "Shape.h"
/// @brief This is Car class
///
/// This is based class of Bmw class and Mazda class
class Car
{
public:
	/// @brief This is print() function
	///
	/// This will draw shape of a car, this is an overiding function
	/// @returns This function returns void
	virtual void print();

	/// @brief This is print() function
	///
	/// This will print a message "Driving a car"
	/// @returns This function returns void
	virtual void drive();
};

