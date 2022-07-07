#include<iostream>
using namespace std;

// ���ڿ��� ���õ� ��������

// ����1) ���ڿ� ���̸� ����ϴ� �Լ�
int StrLen(const char* str)
{
	int count = 0; // str�̶�� ���ڿ��� ���̸� ��ȯ

	while (str[count] != '\0')
	{
		count++;
	}

	return count;

}

// ����2) ���ڿ� ���� �Լ�
#pragma warning(disable: 4996)
char* StrCpy(char* dest, char* src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return dest;

}

// ����3) ���ڿ��� �����̴� �Լ�
#pragma warning(disable: 4716)
char* StrCat(char* dest, char* src)
{
	int len = StrLen(dest);

	int i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return dest;

}

// ����4) �� ���ڿ��� ���ϴ� �Լ�
int StrCmp(char* a, char* b)
{
	int i = 0;

	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] > b[i])
		{
			return 1;
		}
		if (a[i]<b[i])
		{
			return -1;
		}
	}

	return 0;

}

// ����5) ���ڿ��� ������ �Լ�
void ReverseStr(char* str)
{
	int len = StrLen(str);

	for (int i = 0; i < len / 2; i++)
	{
		int temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

int main()
{
	const int BUF_SIZE = 100;

	char a[BUF_SIZE] = "Hello";
	char b[BUF_SIZE] = "World";

	int len = StrLen(a);

	cout << len << endl;

	StrCpy(b, a);

	cout << b << endl;


	StrCat(a, b); 

	cout << a << endl;

	// �ּҰ� �ٸ��� ������ �ٸ��� ��� ���빰 �񱳰� �ƴϴ�.
	if (a == b)
	{
		cout << "����" << endl;
	}
	else
	{
		cout << "�ٸ���" << endl; 
	}

	int value = StrCmp(a, b);
	cout << value << endl;

	ReverseStr(a);

	cout << a << endl;

	return 0;

}