#include<iostream>
using namespace std;

void SetNumber(int* a)
{
	*a = 1;
}

void SetMessage(const char* a)
{
	a = "Bye"; // .rdata Bye�ּ�[B][y][e][\0]
}

void Setmessage2(const char** a)
{
	*a = "Bye";
}

void Setmessage3(const char*& a) // ������ ����
{
	a = "Wow";
}

int main()
{
	int a = 0;
	SetNumber(&a);
	cout << a << endl;

	// msg[ Hello�ּ� ] << msg�� 8����Ʈ�� �ּҸ� ��� �ٱ���
	// .rdata Hello�ּ� [H][e][l][l][o][\0]
	const char* msg = "Hello";

	// [�Ű�����][RET][��������(msg(Hello �ּ�))][�Ű�����(a(Hello�ּ�))][RET][��������]
	SetMessage(msg);
	cout << msg << endl;

	// ���� ������
	// �ּ�2 [ ] << 1����Ʈ // .rdata Hello�ּ� [H][e][l][l][o][\0]
	// �ּ�1[ Hello�ּ� ] << 8����Ʈ 
	// pp [ &msg ] << 8����Ʈ
	const char** pp = &msg;

	Setmessage2(&msg);
	cout << msg << endl;

	Setmessage3(msg);
	cout << msg << endl;

	return 0;
	
}