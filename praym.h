#pragma once 

class Rectangle
{
public:
	void set(int, int);
	int getWidth();
	int getHeight();
	int area();
	int perimeter();
	Rectangle();
	Rectangle(int,int);
	Rectangle(Rectangle&);
	~Rectangle();
private:
	int width;
	int height;
};