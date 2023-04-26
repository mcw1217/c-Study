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
		cout << "1. �α���  2.ȸ������ 3.���� ";
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
					cout << "�α��� ����: " << acc[i].getId() << endl;
					index = i;
					stop = 1;
					break;
				}
				if (i+1 == sizeof(acc) / sizeof(acc[0]))
				{
					cout << " �α��� ����![��й�ȣ����]";
					break;
				}
			}
		}
		else if (num == 2)
		{
			cout << "[ȸ������] ID:" << endl;
			cin >> id;
			cout << "[ȸ������] PASSWORD: " << endl;
			cin >> password;
			for (int i = 0; i < sizeof(acc) / sizeof(acc[0]); i++)
			{
				if (id.compare(acc[i].getId()) == 0)
				{
					cout << "�����ϴ� ���̵�!";
					break;
				}
				if (password.compare(acc[i].getPassword()) == 0)
				{
					cout << "�����ϴ� ��й�ȣ!";
					break;
				}
				firstacc += 1;
				acc[firstacc] = Account(id, password);
				cout << "ȸ������ ����!: " << acc[firstacc].getId() << "��й�ȣ:" << acc[firstacc].getPassword() << endl;
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
		//cout << "ȯ���մϴ�:" << acc[index].getId() << "��" << endl;
		cout << "1.�Ա�  2.���  3.�ܾ�����  4.����";
		cin >> num;
		if (num == 1) { cout << "�Ա��� �ݾ��� �����ּ���:"; cin >> plus; acc[index].deposit(plus); }
		else if (num == 2) { cout << "����� �ݾ��� �����ּ���:"; cin >> plus; acc[index].withdraw(plus); }
		else if (num == 3) { acc[index].checkBalance(); }
		else if (num == 4) { break; }
	}

	return 0;
}