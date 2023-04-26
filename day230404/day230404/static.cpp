#include <iostream>
using namespace std;


class Person
{
private:
public:
	int money = 0;
	static int shareMoney;
	Person() {
	};
	void addshareMoney(int add)
	{
		shareMoney += add;
	}

};
int Person::shareMoney = 100;