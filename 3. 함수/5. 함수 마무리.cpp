#include<iostream>
using namespace std;

// ������ ���� : �Լ� ������

// �����ε� (�ߺ� ���� : �Լ� �̸��� ����)
// - �Ű����� ������ �ٸ��ų�
// - �Ű����� Ÿ���� �ٸ��ų� (������ �ٸ��� ����)

int Add(int a, int b)
{
	int result = a + b;
	return result;
}

float Add(float a, float b)
{
	float result = a + b;
	return result;
} 

// �⺻ ���ڰ�
void SetPlayerInfo(int hp, int mp, int attack, int guildId=0) // �⺻�μ��� �׻� �������� �;��Ѵ�.
{
	
}

// ���� �����÷ο�
int Factorial(int n)
{
	// 5! = 5*4*3*2*1
	// 1! = 1
	if (n <= 1)
		return 1;

	return n * Factorial(n - 1); // ������ ó���� �ʿ�
}

int main()
{
	float result = Add(1.5f, 2.1f);
	cout << result << endl;

	SetPlayerInfo(100, 40, 10);

	int fac = Factorial(1000000); // ũ�Ⱑ �ʹ�Ŀ�� ���� �����ӿ� ���� ���� ����� ���Ѵ�.
	cout << fac << endl;

	return 0;
}