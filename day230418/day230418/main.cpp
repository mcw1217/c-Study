#include <iostream>

using namespace std;
class Circle
{
private:
	int r;
public:
	Circle(int _r) :r(_r) {};
	double getArea();
	~Circle() {};
};

double Circle::getArea()
{
	return r*r*3.14;
}

int main()
{
	Circle c(7);
	cout << "¿ø ³ÐÀÌ" << c.getArea() << endl;
}