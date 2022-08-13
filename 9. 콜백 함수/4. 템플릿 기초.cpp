#include<iostream>
using namespace std;

void Print(int a)
{
	cout << a << endl;
}

void Print(float a) // �Լ� �����ε�
{
	cout << a << endl;
}

void Print(double a)
{
	cout << a << endl;
}

void Print(const char* a)
{
	cout << a << endl;
}

class Knight
{
public:

public:
	int _hp = 100;
};

template<typename T> // ��쿡 ���� �ڷ����� ���
void Print(T a)
{
	cout << a << endl;
}

template<typename T1, typename T2>
void Print(T1 a, T2 b)
{
	cout << a << " " << b << endl;
}

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

 // ������ �����ε� (�����Լ� ����)
ostream& operator<<(ostream& os, const Knight& k)
{
	os << k._hp;
	return os;
}

// ���ø� Ư��ȭ
template<>
void Print(Knight a)
{
	cout << "Knight !!!!!" << endl;
	cout << a._hp << endl;
}

int main()
{
	// ���ø� : �Լ��� Ŭ������ ����� Ʋ
	// 1) �Լ� ���ø�
	// 2) Ŭ���� ���ø�
	

	Print<int>(50); // ����� �ڷ��� ���� 
	Print(50.0f);
	Print(50.0);
	Print("Hello World");

	int result1 = Add(1, 2);
	float result2 = Add<float>(1.11f, 2.22f);

	Knight k1;
	Print(k1);

	return 0;

}