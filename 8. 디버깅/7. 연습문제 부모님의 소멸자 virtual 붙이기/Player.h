#pragma once



class Player
{
public:
	Player();
	Player(int hp);

	virtual ~Player(); // �θ���� �Ҹ��ڿ��� �ݵ�� virtual�� �ٿ���� �Ѵ�.

	void PrintInfo();

	void AddHp(int value);
	bool IsDead();

	int GetAttackDamage();

	void OnDamaged(Player* attacker);

public:

	int _hp;
	int _maxHp;
	int _attack;
};

