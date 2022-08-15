#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<deque>
#include<set>
#include<algorithm>
using namespace std;

class Creature
{
public:
	virtual void Attack()
	{
		cout << "Creature!" << endl;
	}

};

class Player : public Creature
{
public:
	virtual void Attack() override // ������ �Ҷ� override ���
	{
		cout << "Player!" << endl;
	}

	virtual void Attack() final // ���̻� override�� �ϰ���� ������ final ���
	{
		cout << "Player!" << endl;
	}

};

class Knight : public Player
{
public:
	// �Լ��� ������ : �������̵�
	virtual void Attack() override 
	{
		cout << "Knight!" << endl;
	}

	// �����ε� : �Լ� �̸��� ����
	void Attack(int a)
	{

	}

private:
	int _stamina = 100;

};

int main()
{
	Player* player = new Knight();

	player->Attack();

	return 0;

}