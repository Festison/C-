#include<iostream>
using namespace std;


// F5
// F10 ���ν��� ������ ���� ���ν����� �Լ��� �ٸ��̸�
// F11

void PrintNumber(int number) 
{
	cout << "�Ѱ��ֽ� ���ڴ� " << number << " �Դϴ�" << endl;
}

int MultiplyBy(int a, int b)
{
	int c = a * b;
	return c;

}
int main()
{
	int a = 3;
	int b = 5;
	int result = MultiplyBy(b, a);

	PrintNumber(result);
	return 0;
}