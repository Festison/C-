#include<iostream>
using namespace std;

// ������ ���� : �Լ�(���ν���, �޼���, ��ƾ)
/*
input���� ������ �ް�, output���� ������ ������ �����ش�

��ȯŸ�� �Լ��̸�([����Ÿ�� �Ű�����])
{

	�Լ� ����

	return ~~~;
}
*/
// Hello World�� ����ϴ� �Լ�
// input : ���� / output : ����
// Ÿ�� : int float double char ~~ void

void printHelloWorld(void)
{
	cout << "Hello World" << endl;
}

// ������ �Է� �޾Ƽ� , �ֿܼ� ����ϴ� �Լ��� ������
// input : int / output : ����
void PrintNumber(int number) // �Ű� ����
{
	cout << "�Ѱ��ֽ� ���ڴ� " << number  << " �Դϴ�" << endl;
}

// 2�� ���ϰ� ������� ��� �Լ��� ������
// input : int / output : int

int MultplyBy2(int a)
{
	int result = a * 2;
	return result;
}

// �� ���ڸ� ���ؼ� ������� ��� �Լ��� ������
// input : int, int / output : int

int MultplyBy(int a, int b)
{
	int c = a * b;
	return c;
}
int main()
{
	int a = 3;
	int b = 5;
	int result = MultplyBy(b, a);
	int c= MultplyBy2(3);
	PrintNumber(result);
	printHelloWorld();
	return 0;
}