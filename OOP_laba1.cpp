#include "stdafx.h"
#include "praym.h"
#include <iostream>

using namespace std;

#define SIZE 10

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "- - - = = = # # # ����001 # # # = = = - - - \n" << endl;

	Rectangle rectangle[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		rectangle[i].set(rand() % 100, rand() % 10);
		cout << i+1 << " " << rectangle[i].getHeight() << ":" << rectangle[i].getWidth() << endl;
	}

	cout << "������� �):" << endl;

	int k = 0, p = 0;
	
	for (int i = 0; i < SIZE; i++)
	{
		if (rectangle[i].getHeight() == rectangle[i].getWidth())
			k++;
		else
			p++;
	}

	cout << "���������: " << k << endl;
	cout << "���������������: " << p << endl; 

	cout << "\n ������� �):" << endl;

	int minArea = rectangle[0].area(); 
	int maxArea = rectangle[0].area();

	int minPerimetr = rectangle[0].perimeter();
	int maxPerimetr = rectangle[0].perimeter();

	int minIP, maxIP, minIA, maxIA;

	for (int i = 0; i < SIZE; i++)
	{
		if (minArea > rectangle[i].area() && rectangle[i].area() > 0)
		{
			minArea = rectangle[i].area();
			minIA = i;
		}
		else if (maxArea < rectangle[i].area() && rectangle[i].area() > 0)
		{
			maxArea = rectangle[i].area();
			maxIA = i;
		}

		if (minPerimetr > rectangle[i].perimeter() && rectangle[i].perimeter() > 0)
		{
			minPerimetr = rectangle[i].perimeter();
			minIP = i;
		}
		else if (maxPerimetr < rectangle[i].perimeter() && rectangle[i].perimeter() > 0)
		{
			maxPerimetr = rectangle[i].perimeter();
			maxIP = i;
		}
	}

	cout << "������������ ������� " << maxArea << " � ������ ��� ������� " << maxIA << endl;
	cout << "����������� ������� " << minArea << " � ������ ��� ������� " << minIA << endl;
	cout << "������������ �������� " << maxPerimetr << " � ������ ��� ������� " << maxIP << endl;
	cout << "����������� �������� " << minPerimetr << " � ������ ��� ������� " << minIP << endl;

	Rectangle b(2,3);
	Rectangle c(rectangle[0]);

}


