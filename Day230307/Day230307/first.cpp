#include <iostream>
#include <string>
#include <typeinfo>
#include <iomanip>

using namespace std;

int main()
{
	//cout << "hello world" << endl;
	//cout << "C++!";

	/*
	int num1, num2, sum;
	cout << " ù��° �Է� ��:";
	cin >> num1;
	cout << "�ι�° �Է� ��:";
	cin >> num2;
	sum = num1 + num2;
	cout << "�� ���� ��:" << sum; */

	/*
	cout << "short ��" << sizeof(short) <<endl;
	cout << "int ��" << sizeof(int) << endl;
	cout << "long ��" << sizeof(long) << endl;
	cout << "float ��" << sizeof(float) << endl;
	cout << "double ��" << sizeof(double) << endl;

	float x = 3.5F;
	cout << x << endl;
	*/
	/*
	const double PI = 3.14;
	double radius;
	double perimeter;
	double area;

	cout << "���� ������ �Է�:";
	cin >> radius;
	perimeter = 2 * PI * radius;
	area = PI * PI * radius;

	cout << "������:" << radius << endl;
	cout << "�ѷ�" << perimeter << endl;
	cout << "����" << area;
	*/

	/*
	string name;
	cout << "�̸��� �Է�:" << endl;
	cin >> name;
	cout << "�̸�:" << name;
	*/

	/*
	float x = 3.5F;
	cout << x << endl;
	char gender = 'M';
	string name;
	cout << "�̸��� �Է�:" << endl;
	cin >> name;
	cout << "������ �Է�:" << gender << "�̸�:" << name << endl;
	cin.ignore(); //getchar(); ���������, ���� ����
	string addr;
	cout << "�ּҸ� �Է�:" << endl;
	getline(cin, addr); // ������� �����ϴ� ���ڿ� �Լ�
	cout << "�ּ�:" << addr << endl;
	string text = "Hello World";
	cout << "���ڿ�:" << text << endl;
	cout << "ù��° ����:" << text[3] << endl;
	*/

	//Declaration
	//int a = 10;
	//double b = 5.78;
	//cout << a + b << endl;
	//cout << static_cast<int>(b) + a << endl;
	//cout << "�ڷ��� Ȯ��:" << typeid(a).name() << endl; //#include <typeinfo> �ʿ�
	//
	//short x = +327678;
	//cout << x << endl;

	//int x = 125;
	//cout << "10����: " << x << endl;
	//cout << "8����: " << oct << endl;
	//cout << "16����" << hex << endl;
	//cout << "10����" << showbase << dec<< x<< endl;
	//cout << "10����" << showbase << oct<< x<< endl;
	//cout << "10����" << showbase << hex<< x<< endl;

	//double y = 12345.678;
	//cout << fixed << setprecision(2) << showpos <<setfill('*') << endl;
	//cout << setw(15) << left <<y << endl;
	//cout << setw(15) << internal << y << endl;
	//cout << setw(15) << right << y << endl;
	
	//unsigned long duration, hours, minutes, seconds;

	//cin >> housrs;

	int score1, score2, score3;
	cout << "score1 �Է�:" << endl;
	cin >> score1;
	cout << "score2 �Է�:" << endl;
	cin >> score2;
	cout << "score3 �Է�:" << endl;
	cin >> score3;
	
	int max, min;
	if (score1 >= score2 && score1 >= score3)
	{
		max = score1;
	}
	else if (score2 >= score1 && score2 >= score3)
	{
		max = score2;
	}
	else if (score3 >= score1 && score3 >= score2)
	{
		max = score3;
	}

	if (score1 <= score2 && score1 <= score3)
	{
		min = score1;
	}
	else if (score2 <= score1 && score2 <= score3)
	{
		min = score2;
	}
	else if (score3 <= score1 && score3 <= score2)
	{
		min = score3;
	}
	cout << "�ִ�:" << max<<"�ּ�:" << min << endl;
	float avg;
	avg = (max+min) / 2;
	cout << "Student Score:" << avg;
	return 0;
}



