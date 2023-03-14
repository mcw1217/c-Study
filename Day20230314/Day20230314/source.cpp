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

	cout << "두 수의 최대값 = " << maxtest(45, 7) << endl;
	cout << "세 수의 최대값 = " << maxtest(45, 7,30) << endl;

	
	
	
}


// 미완성  나중에 완성시킬 것 
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



void swap1(int &a, int &b) //call by reference 방식
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}



void game()
{
	srand(time(NULL));
	int x = rand() % 15 + 1; //100으로
	//cout << x << endl;

	int count = 1;
	int value = 0;
	while (x != value)
	{
		if (count < 6)
		{
			cout << endl<<"1~15 사이의 정수를 입력하세요!:";
			cin >> value;
			count++;
		}
		else
		{
			cout << "예측 실패! 답=" << x;
			return ;
		}
		cout << compare(x, value);
		
	}
	cout << "정답입니다!! 답=" << x;

}


string compare(int x, int value)
{
	if (x > value)
	{
		return "더 큰 숫자 입니다!";
	}
	else
	{
		return "더 작은 숫자 입니다!";
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
	string coffee1 = "에스프레소";
	string coffee2 = "카푸치노";
	string coffee3 = "아메리카노";
	string menu;

	int money=0;
	int size = 0;

	while (money < 20000)
	{
		cout <<endl<< "커피를 주문해주세요!";
		cin >> menu >> size;

		if (menu == "에스프레소")
		{
			money += 2000*size;
		}
		else if (menu == "카푸치노")
		{
			money += 2500*size;
		}
		else if (menu == "아메리카노")
		{
			money += 2000*size;
		}
		cout << "[주문금액]:" << money;
	}
	cout << endl << "나가주세요 문의는 dm으로 받으실게요![결제금액]:" << money;


	
}




void ex2()
{
	int inputValue;
	int size = 0;
	double sum = 0.0;
	double product=1.0;
	cout << "숫자를 입력해주세요!";
	cin >> size;
	
	for (int counter=1; counter < size+1; counter++)
	{
		double ex = 0.0;
		cout << "next int:";
		cin >> ex;
		sum += ex;
		product *= ex;
	}
	cout << "sum 값 출력:" << sum << endl;
	cout << "product 값 출력:" << product << endl;

	
}




//정수를 입력하면 2씩 곱해서 나오는 함수
void ex1()
{

	int inputValue;
	cout << "숫자를 입력해주세요! 2-10 사이:";
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
			cout << "2~10 사이의 정수를 입력해주세요!";
			cin >> inputValue;
		}
	}

}

