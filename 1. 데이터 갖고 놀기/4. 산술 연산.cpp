#include<iostream>
using namespace std;


// ������ ����


int a = 1;
int b = 2;

int main()
{
#pragma region ��� ����
	// ��� ������
	// ���Կ���
	
	a = b; //a �� b�� �����ϰ� b �� ��ȯ�Ѵ�.

#pragma endregion
#pragma region ��Ģ ����
	// ��Ģ����
	a = b + 3; // ���� add
	a = b - 3; // �E�� sub
	a = b * 3; // ���� mul
	a = b / 3; // ������ div
	a = b % 3; // ������ div

	a += 3; // a = a + 3;
	a -= 3;
	a *= 3;
	a /= 3;
	a %= 3;
#pragma endregion

	//���� ������ 
	a = a + 1;
	a++; //���� ������
	++a; //���� ������
	a--;
	--a;

	b = a++; // b = a -> a�� 1 ����
	b = ++a; // a�� 1���� -> b=a


	return 0;

}