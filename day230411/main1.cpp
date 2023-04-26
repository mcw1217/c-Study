#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
using namespace std;

int a = 100;
void show() {
    int a = 0;
}
class Test {
private:
    int s;
public:
    Test(int _s = 0) :s(_s) {};
    ~Test() {};
};
class Circle {
private:
    float radius;
public:
    Circle(float _radius = 0) : radius(_radius) {};
    ~Circle() {};
    float getRadius();
    float getArea();
};

float Circle::getRadius() {
    return radius;
}

float Circle::getArea() {
    return radius * radius * 3.14;
}

void findAvg(int scores[][3], int r, int c)
{
	int i,j;
	double ctemp[3]={0};
	double temp;
	cout <<setw(5)<< "국어" <<"영어"<<"수학"<< endl; 
	for(i=0;i<r;i++)
	{	
		ctemp[0] += scores[i][0];
		ctemp[1] += scores[i][1];
		ctemp[2] += scores[i][2];
		for(j=0;j<c;j++)
		{
			cout << setw(5) << scores[i][j];
			temp += scores[i][j];
		}
		temp = temp / 3;
		cout <<" "<< ceil(temp);
		temp = 0;
		cout<<endl;
	}
	for(i=0;i<3;i++) cout<< setw(5) << ceil(ctemp[i]/5);
}

void exswap(int &x, int &y)
{
	int temp;
	temp  = x;
	x = y;
	y = temp;
	
}

void testavg(int y[], int size, int &average)
{
	int i;
	int sum;
	for(i=0;i<size;i++)
	{
		sum += y[i];
	}
	average = sum / 5;
	
}

void ex2swap(int *px, int *py) // call by pointer
{
	int t = *px;
	*px = *py;
	*py = t;
}


class Student
{
	private:
		string name;
		int point;
	public:
		Student(){};
		Student(string name, int point){ this->name = name; this->point = point;
		};
		string getShow()
		{
			string temp="jjj";
			temp += name + to_string(point);
			return temp;
		};
		
};


int main()
{
	Student st[] = {Student("kim",78),Student("lee",56),Student("park",98)};
	Student *pst =st;
	for(int i=0;i<3;i++)
	{
		cout << pst->getShow() <<endl; // 3명의 이름과 점수와 학점 
		pst++;
	}
	
}





//
//int main()
//{
//	int a[] = {4,5,6,54,43,3,73,5,6};
//	int *ap = a;
//	int i;
//	for(int i =0; i<9;i++)
//	{
//		cout << a[i] << endl;
//	}
//	for(int i=0;i<9;i++)
//	{
//		cout<< *(ap+i) << endl; // 클래스형 *ap->getArea() 
//	}
//}




//
//int main()
//{
//	int a = 100;
//	int *ap = &a; //포인터 
//	cout <<*ap;
//	int x=10, y=20;
//	ex2swap(&x,&y);
//	cout << "x= "<< x<< ","<< y<<endl;
//}






//
//int main()
//{
//	int x[] = {40,50,60,30,100};
//	int avg;
//	testavg(x,5,avg);
//	cout<<"평균"<<avg<<endl;
//}


//int main()
//{
//	int x=5, y=7;
//	exswap(x,y);
//	cout << "X" << x << "y" <<y;
// } 


//
//int main()
//{
//	int score = 92;
//	int& rscore = score; // 참조 변수 (별칭)  
//	rscore= 100;
//	cout << score <<","<<rscore<<endl;
//}



//
//int main()
//{
//	int score[5][3] = { {50,70,30}, {100,36,80},{70,80,80},{50,70,86},{30,70,86}};
//	
//	findAvg(score,5,3);
//	
//}





//
//int main() {
//    int x[5] = { 4, 56, 7, 40 };
//    Test z;
//    Test y[] = { Test(2), Test(5) };
//    cout << "Hello" << endl;
//    Circle c[] = { Circle(5.7), Circle(7.8), Circle(2.3) };
//    for (int i = 0; i < sizeof(c) / sizeof(Circle); i++) {
//        cout << i + 1 << "번째 원의" << endl << "반지름 : " << c[i].getRadius() << endl << "넓이 : " << c[i].getArea() << endl;
//    }
//    return 0;
//}
