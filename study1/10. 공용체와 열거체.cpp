#include<iostream>

using namespace std;

int main() {
	//����ü(union)
	//���� �ٸ� ���������� �� ���� �� ������ ������ �� ����

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 33.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	//����ü(enum)
	//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���

	enum spectrum {red,orange,tellow,green,
	blue, violet, indigo, ultraviolet};
	/*
	1. spectrum�� ���ο� �������� �̸����� �����.
	2. red, orange, yellow.. 0 �������� 7���� ���� ���� ����
	��Ÿ���� ��ȣ ����� �����.
	*/

	spectrum a = orange;
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;
	cout << b << endl;

	return 0;

}