#include <iostream>
#include <string>
using namespace std;

class Circle
{
private:
	int radius=0;

public:
	Circle(int r):radius(r) {};
	double getArea() { return radius * radius * 3.14; };

};

class Student
{
private:
	int score[3];
	string name;
public:
	Student(string name, int score1, int score2, int score3)
	{
		this->name = name; score[0] = score1; score[1] = score2; score[2] = score3;
	}
	string getName()
	{
		return name;
	}
	char getScore()
	{
		int sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum += score[i];
		}
		int avg = sum / 3;
		if (avg >= 90)return 'A';
		else if (avg < 90 && avg >= 80)return 'B';
		else if (avg < 80 && avg >= 70) return 'C';
		else if (avg < 70 && avg >= 60) return 'D';
		else return 'F';
		
	}
	int getavg()
	{
		int sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum += score[i];
		}
		int avg = sum / 3;
		return avg;

	}
	

};

int main()
{
	Student st[] = { Student("È«±æµ¿", 45, 67, 88), Student("¹éµÎ»ê", 63, 87, 98),Student("±èÃ¤¿¬",56,78,97)};
	Student* stu = st;

	for(int i = 0; i < 3; i++)
	{
		cout << "ÀÌ¸§:" << stu->getName() << "  ÇÐÁ¡:" << stu->getScore() << "  Æò±Õ:" << stu->getavg()<< endl;
		stu++;
	}
	


	Circle c[3] = { Circle(5), Circle(7), Circle(8) }; // °´Ã¼ ¹è¿­
	Circle* cp = c;

	for (int i = 0; i < 3; i++)
	{
		cout << "¿ø ³ÐÀÌ" << c[i].getArea() << endl;
	}
	cout << "======================" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "¿ø ³ÐÀÌ" << cp->getArea() << endl;
		cp++;

	}

}