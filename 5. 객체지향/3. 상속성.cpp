#include<iostream>
using namespace std;

// ��ü����
// ��Ӽ�, ���м� , ������

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

// �޸�
//  [ [ Player ] ]
//  [   Knight   ]

// ��� -> �θ���� �ڽĿ��� ������ �����ִ� ��

// ������/�Ҹ���
// �����ڴ� ź���� ����� ȣ��Ǵ� �Լ�
// Knight�� �����ϸ� -> Player�� ������ �ϱ� Knight�� �������ϱ�?
// �Ѵ� ȣ��

// GameObject
// - Creature : Player, Monster, Npc
// - Projectile : Arrow, Fireball
// - Env

class GameObject
{
public:
	int _objectId;
};
class Player : public GameObject
{
public:
	Player()
	{
		_hp = 0;
		_attack = 0;
		_defence = 0;
		cout << "Player() �⺻ ������ ȣ��" << endl;
	}

	Player(int hp)
	{
		_hp = 0;
		_attack = 0;
		_defence = 0;
		cout << "Player(int hp) �⺻ ������ ȣ��" << endl;
	}

	~Player()
	{
		cout << "~Player() �Ҹ��� ȣ��" << endl;
	}

	void Move() { cout << "Player Move ȣ��" << endl; }
	void Attack() { cout << "Player Attack ȣ��" << endl; }
	void Die() { cout << "Player Die ȣ��" << endl; }

public:
	int _hp;
	int _attack;
	int _defence;

};

class Knight : public Player // ��簡 �÷��̾ ��� �޴´�.
{
public:
	Knight()
	{
		// ��ó�� ���� ���⼭ player() �����ڸ� ȣ��
		_stamina = 100;
		cout << "Knight() �⺻ ������ ȣ��" << endl;
	}

	Knight(int stamina) : Player(100)
	{
		// Player(int hp) �����ڸ� ȣ��
		_stamina = stamina;
		cout << "Knight(int stamina) �⺻ ������ ȣ��" << endl;
	}

	~Knight()
	{
		cout << "~Knight() �Ҹ��� ȣ��" << endl;
	}

	// ������ ����� �����ϰ� ���� ����
	void Move() { cout << "Knight Move ȣ��" << endl; } 
public:
	int _stamina;
};

class Mage : public Player
{
public:

public:
	int _mp;
};

int main()
{
	Knight k(100);

	k._hp = 100;
	k._attack = 10;
	k._defence = 5;
	k._stamina = 50;

	k.Move();
	k.Player::Move();

	k.Attack();
	k.Die();

	return 0;

}