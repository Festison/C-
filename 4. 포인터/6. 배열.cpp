#include<iostream>
using namespace std;

struct StatInfo
{
	int hp = 0xA;
	int attack = 0xB;
	int defence = 0xC;

};

int main()
{

	// ���Ͱ� �ִ� 1������
	// TYPE �̸�[����];

	// �迭�� ũ��� ������� ��

	const int monsterCount = 10;
	StatInfo monsters[monsterCount];

	int a = 10;
	int b = a;

	// �迭�� �̸��� ���� �ٸ��� �۵�
	// �迭�� �̸��� �� �迭�� ���� �ּ�
	// ��Ȯ���� ���� ��ġ�� ����Ű�� TYPE* ������
	auto WhoAml = monsters;

	// StatInfo [ 100,10,1 ] 
	// monster_0 [ �ּ� ]
	StatInfo* monster_0 = monsters;
	monster_0->hp = 100;
	monster_0->attack = 10;
	monster_0->defence = 1;

	// �������� ���� StatInfo Ÿ�� �ٱ��� �Ѱ��� �̵��϶�� �ǹ�
	StatInfo* monster_1 = monsters + 1;
	monster_1->hp = 200;
	monster_1->attack = 20;
	monster_1->defence = 2;

	// �����Ϳ� ������ ��������� ��ȯ�� �����ϴ�.
	// StatInfo[ ] StatInfo [ ] monster_2 [ ] 
	StatInfo& monster_2 = *(monsters + 2);
	monster_2.hp = 300;
	monster_2.attack = 30;
	monster_2.defence = 3;

	// ����° �����Ϳ� �ִ� ���빰�� ���� temp [ ���빰 ]
	StatInfo temp;
	temp = *(monsters + 2);
	temp.hp = 400;
	temp.attack = 40;
	temp.defence = 4;

	// �ڵ�ȭ
	for (int i = 0; i < 10; i++)
	{
		StatInfo& monster = *(monsters + i);
		monster.hp = 100 * (i + 1);
		monster.attack = 10 * (i + 1);
		monster.defence = 1 * (i + 1);
	}

	// �� ���� ������δ� �ε����� �ִ�.
	// �迭�� 0������ ���� N��° �ε����� �ش��ϴ� �����Ϳ� �����Ϸ��� �迭�̸�[N]
	// *(monsters + i) = monster[i]
	
	monsters[0].hp = 100;
	monsters[0].attack = 100;
	monsters[0].defence = 100;

	for (int i = 0; i < 10; i++)
	{
		monsters[i].hp = 100 * (i + 1);
		monsters[i].attack = 10 * (i + 1);
		monsters[i].defence = 1 * (i + 1);
	}

	// �迭 �ʱ�ȭ ����
	int numbers[5] = { 0,1,2,3 };
	cout << numbers << endl;

	

	return 0;
}