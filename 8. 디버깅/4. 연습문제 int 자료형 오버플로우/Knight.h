#pragma once

class Knight
{
public:
	Knight();
	Knight(int hp);
	~Knight();

	void PrintInfo();

	void AddHp(int value);
	bool IsDead();

public:
	int _hp; // �����÷ο� ������ ü���� �����ΰ���.
	int _attack;
};

