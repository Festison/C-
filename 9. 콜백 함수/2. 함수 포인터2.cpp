#include<iostream>
using namespace std;

class Knight
{
public:

	static void HelloKnight()
	{

	}

	// ��� �Լ� : Ŭ���� ���ο� ������ �Լ�
	int GetHP(int, int)
	{
		cout << "GetHP()" << endl;
		return _hp;
	}
public:
	int _hp = 100;
};

// typedef�� ����
// typedef ���� ������ -> ������ (Ŀ���� Ÿ�� ����)
// ��Ȯ���� ����/������ ������ �ƴ϶�
// [���� ����]���� typedef�� �տ��� ���̴� ��

typedef int INTEGER;
typedef int* POINTER;
typedef int ARRAY[20];
typedef int(*PFUNC)(int, int);

typedef int(Knight::*PMEMFUNC)(int, int);

int Test(int a, int b)
{
	cout << "Test" << endl;
	return a + b;
}

int t(int a, int b)
{
	cout << "t" << endl;
	return a + b;
}

int main()
{
	// �Լ� ������
	// 1) ������		*
	// 2) ������ �̸�	fn
	// 3) Ÿ��			�Լ�(���ڷ� int 2���� �ް�, int 1���� ��ȯ)
	//int (*fn)(int, int);


	PFUNC fn;

	fn = &Test;

	fn(1, 2);

	(*fn)(1, 2);

	// �� �������� [���� �Լ� / ���� �Լ�]�� ���� �� �ִ�. (ȣ�� �Ծ��� ������ �ֵ�)
	//fn = &Knight::GetHp;

	Test(1, 2);

	Knight k1;
	k1.GetHP(1, 1);

	PMEMFUNC mfn;

	mfn = &Knight::GetHP;

	(k1.*mfn)(1, 1);

	Knight* k2 = new Knight();
	(k2->*mfn)(1, 1);
	delete k2;

	return 0;

}