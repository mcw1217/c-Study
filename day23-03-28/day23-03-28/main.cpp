#include <iostream>
#include <stdlib.h>

using namespace std;
class Person
{
private:
	string name;
	int age=0; // Attribute : Member Variable

public:  //행위: 맴버함수
	Person() { this->name = "han"; this->age = 20; cout << "기본 생성자 <<endl"; } // 기본 생성자: 자동생성
	Person(string name) { this->name = name; age = 20; } // name(n){} 으로 값을 넣을 수 있음
	Person(string name, int age) { this->name = name; this->age = age; }
	~Person() { cout << name << "소멸" << endl; } // 소멸자
	//Person(const ){}
	
	string getName();
	int getAge();
protected: //상속
};
string Person::getName()
{
	return name;
};
int Person::getAge()
{
	return age;
};

class Car
{
private:
	int price=0;
	string name;
	string color;
	int tax = 0;
	char c;
	char star;
public:
	//Car(){}
	//Car(string name, int price) { this->name = name; this->price = price; }
	//Car(string color, string name, int price) { this->color = color; this->name = name; this->price = price; }
	//Car(string color, string name, int price,int tax) { this->color = color; this->name = name; this->price = price; this->tax = tax}
	Car(string name = "모닝", string color = "검정색", int p = 1200) :name(name), color(color), price(price) {}
	~Car() { cout << name << "소멸!"; }
	string getName();
	int getPrice();
	string getColor();
	int getTax();
	void show() { cout << "색상" << getColor() << ",모델 명:" << getName() << ",가격: " << getPrice() << "세금" << getTax() << endl; }
	//void fill()
	//{
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		cout << star << "  ";
	//	}
	//}
	void fill(char star = '*', int y = 10)
	{
		for (int i = 1; i <= y; i++)
		{
			cout << star << " ";
		}
	}

};

string Car::getName()
{
	return name;
}
int Car::getPrice() { return price; }
int Car::getTax() { return price*tax; }
string Car::getColor() { return color; }


class Square
{
private:
	int x, y;
public:
	Square(int x = 1, int y = 1): x(x), y(y) {}
	void show();
};
void Square::show()
{
	cout << "x: " << x << " y: " << y << " 사각형의 넓이: " << x * y << endl;
}
class RandomInteger
{
private:
	int x, y, z;
public:
	RandomInteger(int x, int y)
	{
		this->x = x; this->y = y;
	}
	~RandomInteger() { }
	int print()
	{
		srand((unsigned int)time(NULL));
		int q = y - x;
		z = (rand()%q) + x; 
		//cout << "랜덤 값:" << z << endl;
		return z;
	}

};

class Account
{
private:
	int money;
public:
	Account(int money) { this->money = money; }
	void checkBalance();
	void deposit(int plus);
	void withdraw(int plus);

};
void Account::checkBalance()
{
	cout << "현재 금액: " << money << endl;
}

void Account::deposit(int plus)
{
	money += plus;
}
void Account::withdraw(int plus)
{
	if (money < plus)
	{
		cout << "잔액 부족!";
	}
	else
	{
		money -= plus;
		cout << "출금 금액: " << plus << "현재 금액: " << money << endl;
		
	}
}

int main()
{
	//Person p, p2("KIm"), p3("park", 22);
	//Person p5 = p3; // 객체 복사 복사 생성자 호출
	//cout << p.getName() << p.getAge() << endl;
	//p = p2; // 객체복사, 복사생성자 호출안됨 기본 생성자 호출됨

	//Car c1, c2(string name = "아이노익",string color= "노란색", int price = 3500), c3("흰색", "제네시스", 57000); // 색상, 모델명, 가격
	//c1.fill(); 

	//Square q;
	//Square q2(5);
	//Square q3(6, 7);
	//q.show();
	//q2.show();
	//q3.show();5


	//int result=0;
	//int i = 0;
	//RandomInteger r1(500, 1000);
	//while (result < 800)
	//{ 
	//	result = r1.print();
	//	cout << "현재 실행횟수 : " << i << "수:" << result <<endl;
	//	i++;
	//}
	//cout << "발견!" << result << endl;

	Account a(5000)
	Account b(5000);
	Account c(5000);
	int num = 0;
	int plus = 0;
	while (1)
	{
		cout << "1.입금  2.출금  3.잔액조희  4.종료";
		cin >> num;
		if (num == 1) { cout << "입금할 금액을 적어주세요:"; cin >> plus; a.deposit(plus); }
		else if (num == 2) { cout << "출금할 금액을 적어주세요:"; cin >> plus; a.withdraw(plus); }
		else if (num==3){ a.checkBalance(); }
		else if (num == 4) { break; }
	}
	
	return 0;
}