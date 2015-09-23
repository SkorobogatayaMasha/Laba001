#include "stdafx.h"
#include "praym.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle()
{
	std::cout << "rect()" << std::endl;
	this->height = NULL;
	this->width = NULL;
}

int Rectangle::area()
{
	int area;
	area = width*height;
	return area;
}

int Rectangle::perimeter()
{
	int perimeter;
	perimeter = (width + height) * 2;
	return perimeter;
}

Rectangle::Rectangle(Rectangle& rectangle)
{
	std::cout << "rect(rect&)" << std::endl;
	this->height = rectangle.height;
	this->width = rectangle.width;
}

Rectangle::Rectangle(int height, int width)
{
	std::cout << "rect(int,int)" << std::endl;
	this->height = height;
	this->width = width;
}


int Rectangle::getHeight()
{
	return height;
}

int Rectangle::getWidth()
{
	return width;
}


void Rectangle::set(int height,int wight)
{
	if (wight > 0 && height > 0)
	{
		this->width = wight;
		this->height = height;
	}
	else
	{
		cout << "error" << endl;
		this->width = NULL;
		this->height = NULL;
	}

	
}
Rectangle::~Rectangle()
{
	cout << "~Rectangle()" << endl;
}