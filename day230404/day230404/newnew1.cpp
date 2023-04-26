#include <iostream>
using namespace std;

void sum(int b[], int s)
{
	int sum = 0;

	for (int i = 0; i < s; i++)
	{
		sum += b[i];
	}
	cout << "Че:" << sum << endl;
}void avg(int b[], int s)
{
	int avg = 0;
	int sum = 0;

	for (int i = 0; i < s; i++)
	{
		sum += b[i];
	}
	cout << "ЦђБе:" << sum/s << endl;
}


int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10};
	sum(a, 10);
	avg(a, 10);
}