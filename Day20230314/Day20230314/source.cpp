#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;
void ex1();
void ex2();
void ex3();

int large(int first, int second);
//int small(int first, int second);
void color(int colornum);
void game();
string compare(int x, int value);
void swap1(int &a, int &b);
void maxTest(int a, int b);
void maxTest(int a, int b, int c);

int main()
{
	//int a, b;
	//cin >> a >> b;

	//int num = small(a,b) ;
	//cout << num;
	//game();

	//int a = 10;
	//int b=20;
	//swap1(a, b);
	//cout << a << b;
	//return 0;

	cout << "�� ���� �ִ밪 = " << maxtest(45, 7) << endl;
	cout << "�� ���� �ִ밪 = " << maxtest(45, 7,30) << endl;

	
	
	
}


// �̿ϼ�  ���߿� �ϼ���ų �� 
void maxTest(int a, int b, int c)
{
	
	return
}

void maxTest(int a, int b)
{
	int temp;
	if (x > value)
	{
		temp = x;
	}
	else
	{
		temp = value;
	}
	return 
}



void swap1(int &a, int &b) //call by reference ���
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}



void game()
{
	srand(time(NULL));
	int x = rand() % 15 + 1; //100����
	//cout << x << endl;

	int count = 1;
	int value = 0;
	while (x != value)
	{
		if (count < 6)
		{
			cout << endl<<"1~15 ������ ������ �Է��ϼ���!:";
			cin >> value;
			count++;
		}
		else
		{
			cout << "���� ����! ��=" << x;
			return ;
		}
		cout << compare(x, value);
		
	}
	cout << "�����Դϴ�!! ��=" << x;

}


string compare(int x, int value)
{
	if (x > value)
	{
		return "�� ū ���� �Դϴ�!";
	}
	else
	{
		return "�� ���� ���� �Դϴ�!";
	}

}

void color(int colornum)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
}


int large(int first, int second)
{
	int temp;
	if (first > second)
	{
		temp = first;
	}
	else
	{
		temp = second;
	}
	return temp;
}

//}int small(int first, int second)
//{
//	int temp;
//	if (first > second)
//	{
//		temp = second;
//	}
//	else
//	{
//		temp = first;
//	}
//	return temp;
//}

void ex3()
{
	string coffee1 = "����������";
	string coffee2 = "īǪġ��";
	string coffee3 = "�Ƹ޸�ī��";
	string menu;

	int money=0;
	int size = 0;

	while (money < 20000)
	{
		cout <<endl<< "Ŀ�Ǹ� �ֹ����ּ���!";
		cin >> menu >> size;

		if (menu == "����������")
		{
			money += 2000*size;
		}
		else if (menu == "īǪġ��")
		{
			money += 2500*size;
		}
		else if (menu == "�Ƹ޸�ī��")
		{
			money += 2000*size;
		}
		cout << "[�ֹ��ݾ�]:" << money;
	}
	cout << endl << "�����ּ��� ���Ǵ� dm���� �����ǰԿ�![�����ݾ�]:" << money;


	
}




void ex2()
{
	int inputValue;
	int size = 0;
	double sum = 0.0;
	double product=1.0;
	cout << "���ڸ� �Է����ּ���!";
	cin >> size;
	
	for (int counter=1; counter < size+1; counter++)
	{
		double ex = 0.0;
		cout << "next int:";
		cin >> ex;
		sum += ex;
		product *= ex;
	}
	cout << "sum �� ���:" << sum << endl;
	cout << "product �� ���:" << product << endl;

	
}




//������ �Է��ϸ� 2�� ���ؼ� ������ �Լ�
void ex1()
{

	int inputValue;
	cout << "���ڸ� �Է����ּ���! 2-10 ����:";
	cin >> inputValue;
	while (1)
	{
		if (1 < inputValue && inputValue < 11)
		{
			for (int i = 2; i < inputValue + 1; i++)
			{
				for (int j = 1; j < inputValue; j++)
				{
					cout << i * j << "\t";
				}
				cout << endl;
			}
			return;
		}
		else
		{
			cout << "2~10 ������ ������ �Է����ּ���!";
			cin >> inputValue;
		}
	}

}

