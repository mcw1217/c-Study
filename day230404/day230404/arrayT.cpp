#include <iostream>
using namespace std;

int main()
{
	const int CAP = 5;
	int ar[CAP] = { 1,2,3,4,5 };
	cout << "�迭�� ���" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i << "��°" << ar[i] << endl;
	}
		int a = 2;
		int* ap = &a;
		cout << "�ּ� :" << ap << ",��" << *ap << endl;
		int* arp = ar;
		for (int i = 0; i < 5; i++)
		{
			cout << *arp++ << endl;
		}
		
	
}