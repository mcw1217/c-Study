#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
using namespace std;
class Circle
{
	private: //클래스 안에서만 사용
		double radius; //속성 ,클래스 변수
		string color;
	public: //외부 클래스에서 사용가능
		double getRadius() const; //메소드(행위) + const는 변하지 않는 것
		double getArea() const;
		double getPerimeter() const;
		void setRadius(double value) //클래스 메소드(함수)
		{
			radius = value; //초기화, 인라인 함수
		}
		void setColor(string color);
		string getColor();

}; //클래스 작성: 속성과 행위

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	return radius * radius * 3.14;
}
double Circle::getPerimeter() const
{
	return 2 * 3.14 * radius;
}

string Circle::getColor()
{
	return color;
}

void Circle::setColor(string color)
{
	this->color = color;
}

class TV
{
private:
	double channel;
	double size;
	string color;
public:
	void setChannel(double channel);
	void setSize(double size);
	void setColor(string color);
	double getChannel();
	double getSize();
	string getColor();
	int channelUp(int s);
	int channelDown(int s);
};

void TV::setChannel(double channel)
{
	this->channel = channel;
}
void TV::setSize(double size)
{
	this->size = size;
}
void TV::setColor(string color)
{
	this->color = color;
}
double TV::getChannel()
{
	return channel;
}
double TV::getSize()
{
	return size;
}
string TV::getColor()
{
	return color;
}
int TV::channelUp(int s)
{
	channel = channel + s;
	return channel;
}
int TV::channelDown(int s)
{
	channel = channel - s;
	return channel;
}

class Square
{
private:
	int width;
	int height;
public:
	Square(int width, int height);
	Square();
	Square(int height);
	int getArea();
	Square(const Square& sq); //복사 생성자: 할당받은 메모리까지 복사
	~Square() { cout << height << ": 소멸자" << endl; } //소멸자

};
int Square::getArea()
{
	return width * height;
}
Square::Square(int width, int height)
{
	this->width = width; this->height = height;
}
Square::Square()
{
	this->width = 5; this->height = 3;
}
Square::Square(int height)
{
	this->width = 5; this->height = height;
}
Square::Square(const Square& sq)
{
	width = sq.width; height = sq.height;
}

class Time
{
private:
	int first=0;
	int second=0;
	int third=0;
public:
	Time();
	Time(int first, int second);
	Time(int first, int second, int third);
	Time(const Time& sq);
	void show();

};
Time::Time()
{
	first = 12;
}
Time::Time(int first, int second)
{
	this->first = first; this->second = second;
}
Time::Time(int first, int second, int third)
{
	this->first = first; this->second = second; this->third = third;
}
Time::Time(const Time& sq)
{
	first = sq.first; second = sq.second; third = sq.third;
}
void Time::show()
{
	cout << "현재시간:" << first << "시 " << second << "분 " << third << "초" << endl;
}








int main(void)
{
	Time t1, t2(5, 7), t3(7, 8, 50), t4;
	t1.show();
	t2.show();
	t3.show();
	t4 = t3;
	t4.show();







	//Square s(5, 8);
	//cout << "사각형의 넓이 =" << s.getArea() << endl;
	//Square s2;
	//cout << "사각형의 넓이 =" << s2.getArea() << endl;
	//Square s3(7);
	//cout << "사각형의 넓이 =" << s3.getArea() << endl;





	//TV LG;
	//LG.setChannel(7);
	//LG.setSize(45);
	//LG.setColor("black");
	//cout << "채널:" << LG.getChannel() << "크기: " << LG.getSize() << "색상: " << LG.getColor() << endl;
	//cout << "현재 채널번호:" << LG.channelUp(2) << endl;

	//TV SSTV;
	//SSTV.setChannel(11);
	//SSTV.setSize(60);
	//SSTV.setColor("green");
	//cout << "채널:" << SSTV.getChannel() << "크기: " << SSTV.getSize() << "색상: " << SSTV.getColor() << endl;
	//cout << "현재 채널번호:" << SSTV.channelDown(1) << endl;
	



	//Circle c; //객체생성
	//c.setRadius(10.0); //반지름 초기화
	//c.setColor("red");
	//cout << "색상 : " << c.getColor() << "색의 반지름" << c.getRadius() << endl;
	//cout << "반지름 : " << c.getRadius() << "의 넓이는 =" << c.getArea()<< endl;
	//cout << "반지름 : " << c.getRadius() << "의 둘레는" << c.getPerimeter()<<endl;

	//Circle c2; //객체생성
	//c2.setRadius(20.8); //반지름 초기화
	//c2.setColor("blue");
	//cout << "색상 : " << c2.getColor() << "색의 반지름" << c2.getRadius() << endl;
	//cout << "반지름 : " << c2.getRadius() << "의 넓이는 =" << c2.getArea() << endl;
	//cout << "반지름 : " << c2.getRadius() << "의 둘레는" << c2.getPerimeter() << endl;

	//Circle c3; //객체생성
	//c3.setRadius(7.86); //반지름 초기화
	//c3.setColor(");
	//cout << "색상 : " << c3.getColor() << "색의 반지름" << c3.getRadius() << endl;
	//cout << "반지름 : " << c3.getRadius() << "의 넓이는 =" << c3.getArea() << endl;
	//cout << "반지름 : " << c3.getRadius() << "의 둘레는" << c3.getPerimeter() << endl;

	
	return 0;
}

// 생성자를 사용했으면 소멸자를 사용해야한다 안그러면 메모리를 계속 사용함
