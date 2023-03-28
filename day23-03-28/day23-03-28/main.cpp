#include <iostream>
#include <stdlib.h>

using namespace std;
class Person
{
private:
	string name;
	int age=0; // Attribute : Member Variable

public:  //����: �ɹ��Լ�
	Person() { this->name = "han"; this->age = 20; cout << "�⺻ ������ <<endl"; } // �⺻ ������: �ڵ�����
	Person(string name) { this->name = name; age = 20; } // name(n){} ���� ���� ���� �� ����
	Person(string name, int age) { this->name = name; this->age = age; }
	~Person() { cout << name << "�Ҹ�" << endl; } // �Ҹ���
	//Person(const ){}
	
	string getName();
	int getAge();
protected: //���
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
	Car(string name = "���", string color = "������", int p = 1200) :name(name), color(color), price(price) {}
	~Car() { cout << name << "�Ҹ�!"; }
	string getName();
	int getPrice();
	string getColor();
	int getTax();
	void show() { cout << "����" << getColor() << ",�� ��:" << getName() << ",����: " << getPrice() << "����" << getTax() << endl; }
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
	cout << "x: " << x << " y: " << y << " �簢���� ����: " << x * y << endl;
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
		//cout << "���� ��:" << z << endl;
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
	cout << "���� �ݾ�: " << money << endl;
}

void Account::deposit(int plus)
{
	money += plus;
}
void Account::withdraw(int plus)
{
	if (money < plus)
	{
		cout << "�ܾ� ����!";
	}
	else
	{
		money -= plus;
		cout << "��� �ݾ�: " << plus << "���� �ݾ�: " << money << endl;
		
	}
}

int main()
{
	//Person p, p2("KIm"), p3("park", 22);
	//Person p5 = p3; // ��ü ���� ���� ������ ȣ��
	//cout << p.getName() << p.getAge() << endl;
	//p = p2; // ��ü����, ��������� ȣ��ȵ� �⺻ ������ ȣ���

	//Car c1, c2(string name = "���̳���",string color= "�����", int price = 3500), c3("���", "���׽ý�", 57000); // ����, �𵨸�, ����
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
	//	cout << "���� ����Ƚ�� : " << i << "��:" << result <<endl;
	//	i++;
	//}
	//cout << "�߰�!" << result << endl;

	Account a(5000)
	Account b(5000);
	Account c(5000);
	int num = 0;
	int plus = 0;
	while (1)
	{
		cout << "1.�Ա�  2.���  3.�ܾ�����  4.����";
		cin >> num;
		if (num == 1) { cout << "�Ա��� �ݾ��� �����ּ���:"; cin >> plus; a.deposit(plus); }
		else if (num == 2) { cout << "����� �ݾ��� �����ּ���:"; cin >> plus; a.withdraw(plus); }
		else if (num==3){ a.checkBalance(); }
		else if (num == 4) { break; }
	}
	
	return 0;
}