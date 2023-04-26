#include <iostream>
using namespace std;

class Circle
{
private:
	double radius;
public:
	Circle(double r) :radius(r) {};
	double getArea()
	{
		return radius * radius * 3.14; // ¿ø ³ÐÀÌ
	};


};
