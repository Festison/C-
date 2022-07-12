#include<iostream>
using namespace std;

// ��� ���� �ʱ�ȭ ? �پ��� ������ ����
// ���� ���� , ������ �� �ּҰ� ���� ������ �ʱ�ȭ�� �ʿ��ϴ�.

// �ʱ�ȭ ���
// 1) ������ ������ �ʱ�ȭ
// 2) �ʱ�ȭ ����Ʈ
// 3) C++11 ����

// �ʱ�ȭ ����Ʈ
// - �ϴ� ��� ���迡�� ���ϴ� �θ� ������ ȣ���� �� �ʿ��ϴ�.
// - ������ ������ �ʱ�ȭ vs �ʱ�ȭ ����Ʈ
// - �Ϲ� ������ �� ���� ����.
// - ��� Ÿ���� Ŭ������ ��� ���̰� ����.
// - �����԰� ���ÿ� �ʱ�ȭ�� �ʿ��� ��� (���� Ÿ��, const Ÿ��)

class Inventory
{
public:
	Inventory() { cout << "Inventory()" << endl; }
	Inventory(int size) { cout << "Inventory(int size)" << endl; }

	~Inventory() { cout << "~Inventory()" << endl; }

public:
	int _size = 10;
};

class Player
{
public:
	Player() { }
	Player(int id) { }
};

// Is-A (Knight Is-A Player?) ���� �÷��̾�� OK -> ��Ӱ���
// Has-A (Kinght Has-A Inventory?) ���� �κ��丮�� �����ϰ� �ִ°�? OK - ���԰���
class Knight : public Player
{
public:
	Knight() : Player(1), _hp(100), _inventory(20), _hpRef(_hp), _hpConst(100) // �ʱ�ȭ ��� 
		
        // ��ó�� ����
		// _inventory = Inventory(20)
	{
		_hp = 100;
		_inventory = Inventory(20);
	}

public:
	int _hp; // �����Ⱚ
	Inventory _inventory;

	int& _hpRef;
	const int _hpConst;
};

int main()
{
	Knight k;

	cout << k._hp << endl;

	if (k._hp < 0)
	{
		cout << "Knight is Dead" << endl;
	}

	return 0;

}