#include <iostream>
#include "static.cpp"
using namespace std;

int main()
{
	Person kim;
	kim.money = 500;
	kim.shareMoney = 200;

	Person lee;
	lee.money = 700;
	lee.addshareMoney(300);

	cout << "°³ÀÎµ·" << kim.money<<"," <<lee.money<<endl ;
	cout << "°ø±Ý" << kim.shareMoney<<"," <<lee.shareMoney<<endl ;
}