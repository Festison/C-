#include<iostream>
using namespace std;

void Test(int a)
{
	a++;
}

void Test(char a[])
{
	a[0] = 'x';
}

int main()
{

	// test1[ �ּ� ] << 8����Ʈ
	const char* test1 = "Hello World";

	// test2 = �ּ�
	char test2[] = "Hello World";
	test2[0] = 'R';

	cout << test2 << endl;

	// �����ʹ� [�ּҸ� ��� �ٱ���]
	// �迭�� [����] �����ͳ��� �پ��ִ� �ٱ��� ����
	// [�迭 �̸�]�� �ٱ��� ������ �����ּ�

	// �迭�� �Լ��� ���ڷ� �ѱ�� �ȴٸ�
	int a = 0;
	Test(a);
	cout << a << endl;

	Test(test2);
	cout << test2 << endl;

	return 0;
}