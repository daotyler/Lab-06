/// @file
/// @brief This is Rectangle.h file
/// 
/// This file includes Rectangle class
/// @author Tyler and Henil
/// @version 1.0
/// @date 3/23
#pragma once
#include "Shape.h"
class Rectangle:public Shape
{
	int length;
	int width;
public:
	Rectangle(int length, int width);
	void print();
	int getArea();
};

