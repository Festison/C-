#include<iostream>
using namespace std;

int main()
{
	// �����)
	// �������� � ������ �Է��ϸ� n*n���� ���� ������� ���ڽ��ϴ�.

	int star;
	cin >> star;

	for ( int i= 0; i < star; i++)
	{
		for (int j = 0; j < star; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < star; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < star; i++)
	{
		for (int j = 0; j < (star - i); j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	// ������)

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << i << "*" << j << " = " << i * j << endl;
		}

	}

	return 0;
}