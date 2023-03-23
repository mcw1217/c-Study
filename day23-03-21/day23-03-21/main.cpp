#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
using namespace std;
class Circle
{
	private: //Ŭ���� �ȿ����� ���
		double radius; //�Ӽ� ,Ŭ���� ����
		string color;
	public: //�ܺ� Ŭ�������� ��밡��
		double getRadius() const; //�޼ҵ�(����) + const�� ������ �ʴ� ��
		double getArea() const;
		double getPerimeter() const;
		void setRadius(double value) //Ŭ���� �޼ҵ�(�Լ�)
		{
			radius = value; //�ʱ�ȭ, �ζ��� �Լ�
		}
		void setColor(string color);
		string getColor();

}; //Ŭ���� �ۼ�: �Ӽ��� ����

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
	Square(const Square& sq); //���� ������: �Ҵ���� �޸𸮱��� ����
	~Square() { cout << height << ": �Ҹ���" << endl; } //�Ҹ���

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
	cout << "����ð�:" << first << "�� " << second << "�� " << third << "��" << endl;
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
	//cout << "�簢���� ���� =" << s.getArea() << endl;
	//Square s2;
	//cout << "�簢���� ���� =" << s2.getArea() << endl;
	//Square s3(7);
	//cout << "�簢���� ���� =" << s3.getArea() << endl;





	//TV LG;
	//LG.setChannel(7);
	//LG.setSize(45);
	//LG.setColor("black");
	//cout << "ä��:" << LG.getChannel() << "ũ��: " << LG.getSize() << "����: " << LG.getColor() << endl;
	//cout << "���� ä�ι�ȣ:" << LG.channelUp(2) << endl;

	//TV SSTV;
	//SSTV.setChannel(11);
	//SSTV.setSize(60);
	//SSTV.setColor("green");
	//cout << "ä��:" << SSTV.getChannel() << "ũ��: " << SSTV.getSize() << "����: " << SSTV.getColor() << endl;
	//cout << "���� ä�ι�ȣ:" << SSTV.channelDown(1) << endl;
	



	//Circle c; //��ü����
	//c.setRadius(10.0); //������ �ʱ�ȭ
	//c.setColor("red");
	//cout << "���� : " << c.getColor() << "���� ������" << c.getRadius() << endl;
	//cout << "������ : " << c.getRadius() << "�� ���̴� =" << c.getArea()<< endl;
	//cout << "������ : " << c.getRadius() << "�� �ѷ���" << c.getPerimeter()<<endl;

	//Circle c2; //��ü����
	//c2.setRadius(20.8); //������ �ʱ�ȭ
	//c2.setColor("blue");
	//cout << "���� : " << c2.getColor() << "���� ������" << c2.getRadius() << endl;
	//cout << "������ : " << c2.getRadius() << "�� ���̴� =" << c2.getArea() << endl;
	//cout << "������ : " << c2.getRadius() << "�� �ѷ���" << c2.getPerimeter() << endl;

	//Circle c3; //��ü����
	//c3.setRadius(7.86); //������ �ʱ�ȭ
	//c3.setColor(");
	//cout << "���� : " << c3.getColor() << "���� ������" << c3.getRadius() << endl;
	//cout << "������ : " << c3.getRadius() << "�� ���̴� =" << c3.getArea() << endl;
	//cout << "������ : " << c3.getRadius() << "�� �ѷ���" << c3.getPerimeter() << endl;

	
	return 0;
}

// �����ڸ� ��������� �Ҹ��ڸ� ����ؾ��Ѵ� �ȱ׷��� �޸𸮸� ��� �����
