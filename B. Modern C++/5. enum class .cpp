#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<deque>
#include<set>
#include<algorithm>
using namespace std;

// unscoped enum (��������)
enum PlayerType
{
	PT_None,
	PT_Knight,
	PT_Archer,
	PT_Mage
};

enum MonsterType
{
	MT_None
};

// 1) �̸����� ����
enum class ObjectType 
{
	Player,
	Monster,
	Projectile
};

int main()
{
	// enum class 
	// 1) �̸����� ����
	// 2) �Ϲ����� ��ȯ ����

	double value = static_cast<double>(ObjectType::Player);

	int choice;
	cin >> choice;

	if (choice == static_cast<int>(ObjectType::Monster))
	{

	}

	unsigned int bitFlag;
	bitFlag = (1 << static_cast<int>(ObjectType::Player));

	return 0;

}