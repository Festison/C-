#include<iostream>
using namespace std;

// �����ڿ� �Ҹ���
// Ŭ������ �Ҽӵ� �Լ����� ��� �Լ���� �Ѵ�.
// �� �߿��� [����] �� [��] �� �˸��� Ư���� �Լ������ִ�.
// ������ - (������ ���簡��) �Ҹ��� - (�Ѱ��� ����)

// �Ͻ��� ������
// �����ڸ� ��������� ������ ������ �ƹ� ���ڵ� �����ʴ� �⺻ �����ڰ� �����Ϸ��� ���� �ڵ����� ���������.
// ��������� �ƹ� �����ڸ� �ϳ��� ����� �ڵ����� ��������� �⺻�����ڴ� ���̻� ��������� �ʴ´�.

class Knight
{
public:
	// [1] �⺻ ������ (���ڰ� ����)
	Knight()
	{
		cout << "Knight() �⺻ ������ ȣ��" << endl;

		_hp = 100;
		_attack = 10;
		_posX = 0;
		_posY = 0;
	}

	// [2] ���� ������ (�ڱ� �ڽ��� Ŭ���� ���� Ÿ���� ���ڷ� ����)
	// �Ϲ������� �Ȱ��� �����͸� ���� ��ü�� �����Ǳ⸦ ����Ѵ�.
	Knight(const Knight& Knight)
	{
		_hp = Knight._hp;
		_attack = Knight._attack;
		_posX = Knight._posX;
		_posY = Knight._posY;
	}

	// [3] ��Ÿ ������ 
	// ���ڸ� 1���� �޴� ��Ÿ �����ڴ� Ÿ�Ժ�ȯ �����ڶ�� �θ��⵵ �Ѵ�.
	explicit Knight(int hp)
	{
		cout << "Knight() �⺻ ������ ȣ��" << endl;

		_hp = 100;
		_attack = 10;
		_posX = 0;
		_posY = 0;
	}
	
	Knight(int hp, int attack, int posX, int posY)
	{
		_hp = hp;
		_attack = attack;
		_posX = posX;
		_posY = posY;
	}

	// �Ҹ���
	~Knight()
	{
		cout << "Knight() �Ҹ��� ȣ��" << endl;
	}
public:
	int _hp;
	int _attack;
	int _posY;
	int _posX;
};

int main()
{
	Knight k1(100, 10, 0, 0);

	Knight k2(k1); // ���� ������

	Knight k3 = k1; // ���� ������

	Knight k4; // ������
	k4 = k1; // ����

	// �Ͻ��� ����ȯ -> �����Ϸ��� �˾Ƽ� �ٲ��ش�.
	int num = 1;

	float f = (float)num; // ����� - �츮�� �ڵ�� num�� float �ٱ��Ͽ� ������� �ֹ��ϰ� �ִ�.
	double d = num; // �Ͻ��� �����Ϸ��� �˾Ƽ� ó��

	Knight k5;
	k5 = (Knight)1;

	return 0;

}