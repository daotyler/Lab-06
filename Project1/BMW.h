/// @file
/// @brief This is BMW.h file
/// 
/// This file includes Bmw class
/// @author Tyler and Henil
/// @version 1.0
/// @date 3/23
#pragma once
#include "Shape.h"
#include "Car.h"

/// @brief This is the Bmw class
/// 
/// This is a derived class of Car
class Bmw: public Car
{
public:
	/// @brief This is print() function
	///
	/// This function will print shape of a car, this is an overiding function
	/// @returns This function returns void
	void print();

	/// @brief This is drive() function
	///
	/// This function will print a message "Driving BMW"
	/// @returns This function returns void
	void drive();
};

