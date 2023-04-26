#include <iostream>

using namespace std;

class Account
{
private:
	int money = 0;
	string id;
	string password;
public:
	Account() {}
	Account(string id, string password) { this->id = id; this->password = password; }
	void checkBalance();
	void deposit(int plus);
	void withdraw(int plus);
	string getId();
	void setId(string id);
	string getPassword();
	void setPassword(string id);

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
string Account::getId()
{
	return id;
}

void Account::setId(string id)
{
	this->id = id;

}

string Account::getPassword()
{
	return password;
}
void Account::setPassword(string password)
{
	this->password = password;

}
int main()
{

	Account acc[100] = { Account("kim","1234"),Account("suk","1103"),Account("beok","1111") };
	int num = 0;
	int plus = 0;
	string id;
	string password;
	int index = 0;
	int stop = 0;
	int firstacc = 3;


	while (1)
	{
		cout << "1. 로그인  2.회원가입 3.종료 ";
		cin >> num;
		if (num == 1)
		{
			cout << "ID: " << endl;
			cin >> id;
			cout << "PASSWORD: " << endl;
			cin >> password;
			for (int i = 0; i < sizeof(acc) / sizeof(acc[0]); i++)
			{
				if ((password.compare(acc[i].getPassword()) == 0) && (id.compare(acc[i].getId()) == 0))
				{
					cout << "로그인 성공: " << acc[i].getId() << endl;
					index = i;
					stop = 1;
					break;
				}
				if (i+1 == sizeof(acc) / sizeof(acc[0]))
				{
					cout << " 로그인 실패![비밀번호오류]";
					break;
				}
			}
		}
		else if (num == 2)
		{
			cout << "[회원가입] ID:" << endl;
			cin >> id;
			cout << "[회원가입] PASSWORD: " << endl;
			cin >> password;
			for (int i = 0; i < sizeof(acc) / sizeof(acc[0]); i++)
			{
				if (id.compare(acc[i].getId()) == 0)
				{
					cout << "존재하는 아이디!";
					break;
				}
				if (password.compare(acc[i].getPassword()) == 0)
				{
					cout << "존재하는 비밀번호!";
					break;
				}
				firstacc += 1;
				acc[firstacc] = Account(id, password);
				cout << "회원가입 성공!: " << acc[firstacc].getId() << "비밀번호:" << acc[firstacc].getPassword() << endl;
				break;
			}
		}
		else
		{
			exit(1);
		}
		if (stop == 1)
		{
			break;
		}
	}




	while (1)
	{
		//cout << "환영합니다:" << acc[index].getId() << "님" << endl;
		cout << "1.입금  2.출금  3.잔액조희  4.종료";
		cin >> num;
		if (num == 1) { cout << "입금할 금액을 적어주세요:"; cin >> plus; acc[index].deposit(plus); }
		else if (num == 2) { cout << "출금할 금액을 적어주세요:"; cin >> plus; acc[index].withdraw(plus); }
		else if (num == 3) { acc[index].checkBalance(); }
		else if (num == 4) { break; }
	}

	return 0;
}