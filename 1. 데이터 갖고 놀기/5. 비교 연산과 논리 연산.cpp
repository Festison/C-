#include<iostream>
using namespace std;

int a = 1;
int b = 2;
bool isSame;
bool isDifferent;
bool isGreater;
bool isSmaller;
bool test;
int hp = 100;
bool isInvincible = true;
int main()
{
#pragma region �� ����

	// ���� �ʿ��ұ�?
	// ex) ü���� 0�� �Ǹ� ���
	// ex) ����ġ�� 100 �̻��̸� ������

	// a == b  : a�� b�� ���� ������?
	// ������ 1, �ٸ��� 0 true ,false
	isSame = (a == b);

	//a != b : a�� b�� ���� �ٸ���?
	// �ٸ��� 1 , ������ 0
	isDifferent = (a != b);

	// a > b : a�� b���� ū��?
	// a >= b; a�� b���� ũ�ų� ������?
	isGreater = (a > b);
	isSmaller = (a < b);

#pragma endregion
#pragma region �� ����
	// ���� �ʿ��Ѱ�? ���ǿ� ���� ���� ��� �ʿ��� ��
	// ex) �α����� �� ���̵� ���� AND ��й�ȣ�� ���ƾ� �Ҷ� &&
	// ex) ��� �������̰ų� OR ��� �϶� ��� �ػ� ���� ||

	// ! not 
	// 0�̸� 1 ������ 0
	test = !isSame;

	// && and
	// a && b -> �Ѵ� 1�̸� 1 , ������ 0
	test = (hp <= 0 && isInvincible == false); // hp�� 0 �����̰� ������ �ƴϸ� �״´�

	// || or
	// a || b -> �� �� �ϳ��� 1�̸� 1 , �Ѵ� 0 �̸� 0
	test = (hp > 0 || isInvincible == true); // �ǰ� 0 �̻��̰ų� �����̸� ����

#pragma endregion

	return 0;
}