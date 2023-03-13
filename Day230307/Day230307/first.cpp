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
	cout << " 첫번째 입력 값:";
	cin >> num1;
	cout << "두번째 입력 값:";
	cin >> num2;
	sum = num1 + num2;
	cout << "두 수의 합:" << sum; */

	/*
	cout << "short 형" << sizeof(short) <<endl;
	cout << "int 형" << sizeof(int) << endl;
	cout << "long 형" << sizeof(long) << endl;
	cout << "float 형" << sizeof(float) << endl;
	cout << "double 형" << sizeof(double) << endl;

	float x = 3.5F;
	cout << x << endl;
	*/
	/*
	const double PI = 3.14;
	double radius;
	double perimeter;
	double area;

	cout << "원의 반지름 입력:";
	cin >> radius;
	perimeter = 2 * PI * radius;
	area = PI * PI * radius;

	cout << "반지름:" << radius << endl;
	cout << "둘레" << perimeter << endl;
	cout << "면적" << area;
	*/

	/*
	string name;
	cout << "이름을 입력:" << endl;
	cin >> name;
	cout << "이름:" << name;
	*/

	/*
	float x = 3.5F;
	cout << x << endl;
	char gender = 'M';
	string name;
	cout << "이름을 입력:" << endl;
	cin >> name;
	cout << "성별을 입력:" << gender << "이름:" << name << endl;
	cin.ignore(); //getchar(); 버퍼지우기, 엔터 무시
	string addr;
	cout << "주소를 입력:" << endl;
	getline(cin, addr); // 공백까지 포함하는 문자열 함수
	cout << "주소:" << addr << endl;
	string text = "Hello World";
	cout << "문자열:" << text << endl;
	cout << "첫번째 문자:" << text[3] << endl;
	*/

	//Declaration
	//int a = 10;
	//double b = 5.78;
	//cout << a + b << endl;
	//cout << static_cast<int>(b) + a << endl;
	//cout << "자료형 확인:" << typeid(a).name() << endl; //#include <typeinfo> 필요
	//
	//short x = +327678;
	//cout << x << endl;

	//int x = 125;
	//cout << "10진수: " << x << endl;
	//cout << "8진수: " << oct << endl;
	//cout << "16진수" << hex << endl;
	//cout << "10진수" << showbase << dec<< x<< endl;
	//cout << "10진수" << showbase << oct<< x<< endl;
	//cout << "10진수" << showbase << hex<< x<< endl;

	//double y = 12345.678;
	//cout << fixed << setprecision(2) << showpos <<setfill('*') << endl;
	//cout << setw(15) << left <<y << endl;
	//cout << setw(15) << internal << y << endl;
	//cout << setw(15) << right << y << endl;
	
	//unsigned long duration, hours, minutes, seconds;

	//cin >> housrs;

	int score1, score2, score3;
	cout << "score1 입력:" << endl;
	cin >> score1;
	cout << "score2 입력:" << endl;
	cin >> score2;
	cout << "score3 입력:" << endl;
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
	cout << "최대:" << max<<"최소:" << min << endl;
	float avg;
	avg = (max+min) / 2;
	cout << "Student Score:" << avg;
	return 0;
}



