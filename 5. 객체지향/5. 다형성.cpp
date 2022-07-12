#include<iostream>
using namespace std;


// ������ (Polymorphism) = ���� �Ȱ����� ����� �ٸ��� ����
// - ���� �ε� : �Լ� �ߺ� ���� , �Լ� �̸��� ���� 
// - ���� ���̵� : ������ , �θ� Ŭ���� �Լ��� �ڽ� Ŭ�������� ������

// ���ε� : ���´�.
// - ���� ���ε� : ������ ������ ����
// * - ���� ���ε� : ���� ������ ����

// �Ϲ� �Լ��� ���� ���ε��� �⺻���� ���
// ���� ���ε��� ���Ѵٸ� -> ���� �Լ� Ȱ��

// ���� ��ü�� � Ÿ������ ��� �˰� �˾Ƽ� �����Լ��� ȣ�����ذɱ�?
// - ���� �Լ� ���̺� 
// .vftable [] 4����Ʈ(32) 8����Ʈ(64)
// [VMove] [VDie]

// ���� ���� �Լ� : ������ ���� �������̽��� �����ϴ� �뵵�� ��밡��
// �߻� Ŭ���� : ���� ���� �Լ��� 1�� �̻� ���ԵǸ� �ٷ� �߻� Ŭ������ ����
// - ���������� ��ü�� ���� �� ���� �ȴ�.

class Player
{
public:

	Player()
	{
		_hp = 100;
	}

	void Move() { cout << "Move Player !" << endl; }

	//void Move(int a){ cout << "Move Player (int) !" << endl; }
	
	virtual void VMove() { cout << "VMove Player !" << endl; }
	virtual void VDie() { cout << "VDie Player !" << endl; }

	// ���� ���� �Լ�
	virtual void VAttack() = 0;

public:
	int _hp;
};

class Knight : public Player
{
public:

	Knight()
	{
		_stamina = 10;
	}

	void Move() { cout << "Move Knight !" << endl; }

	// ���� �Լ��� �����Ǹ� �ϴ��� ���� �Լ��̴�.
	virtual void VMove() { cout << "VMove Knight !" << endl; } 
	virtual void VDie() { cout << "VDie Knight !" << endl; } 

	virtual void VAttack() { cout << "VAttack Knight !" << endl; }

public:
	int _stamina;
};

class Mage : public Player
{
public:
	int _mp;
};

//  [ [ Player ] ]
//  [   Knight   ]

// [ Player ]
void MovePlayer(Player* player)
{
	player->VMove();
	player->VDie();
}

void MoveKnight(Knight* knight)
{
	knight->Move();
}

int main()
{
	Player p;
	MovePlayer(&p);

	Knight k;
	MoveKnight(&k);
	MovePlayer(&k); // ���� �÷��̾��.

	return 0;

}