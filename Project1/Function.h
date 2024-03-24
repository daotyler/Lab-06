/// @file
/// @brief This is Function.h file
/// 
/// This file includes global functions
/// @author Tyler and Henil
/// @version 1.0
/// @date 3/23

#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"
#include "Car.h"
#include"BMW.h"
#include "Mazda.h"

/// @brief This is draw() function
/// 
/// This will call print function in Shape class, this is polymorphism function
/// @param shape 
void draw(Shape& shape);

/// @brief This is draw() function
/// 
/// This will call print function in Car class, this is polymorphism function
/// @param car
void draw(Car& car);

/// @brief This is drive() function
/// 
/// This will call drive function in Car class, this is polymorphism function
/// @param car 
void drive(Car& car);