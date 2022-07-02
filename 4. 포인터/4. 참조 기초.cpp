#include<iostream>
using namespace std;

struct StatInfo
{
	int hp; // +0
	int attack; // +4
	int defence; // +8
};

void CreateMonster(StatInfo* info);

void CreateMonster(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;
}

void CreateMonster(StatInfo info)
{
	info.hp = 100;
	info.attack = 8;
	info.defence = 5;
}

// 1) �� ���� ���
// [�Ű�����][RET][��������(info)][�Ű�����(info)][RET][��������]
void PrintInfoByCopy(StatInfo info)
{
	cout << "HP: " << info.hp << endl;
	cout << "ATT: " << info.attack << endl;
	cout << "DEF: " << info.defence << endl;
}

// 2) �ּ� ���� ���
// [�Ű�����][RET][��������(info)][�Ű�����(&info)][RET][��������]
void PrintInfo(StatInfo* info)
{
	cout << "HP: " << info->hp << endl;
	cout << "ATT: " << info->attack << endl;
	cout << "DEF: " << info->defence << endl;
}

// StatInfo ����ü�� 1000����Ʈ¥�� ���� ����ü���?
// - (�� ����) StatInfo�� �ѱ�� 1000����Ʈ�� ����ȴ�
// - (�ּ� ����) StatInfo*�� 8����Ʈ�� ����ȴ�.
// - (���� ����) StatInfo*�� 8����Ʈ�� ����ȴ�.

// 3) ���� ���� ��� 
// �� ����ó�� ���ϰ� ���
// �ּ� ����ó�� �ּҰ��� �̿� �ϼ�����
void PrintInfo(StatInfo& info)
{
	cout << "HP: " << info.hp << endl;
	cout << "ATT: " << info.attack << endl;
	cout << "DEF: " << info.defence << endl;
}

int main()
{
	// 4����Ʈ ������ �ٱ��ϸ� ��� 
	// �ٱ��� �̸��� number��� �Ѵ�.
	// number���� �� �����ų� number�� �� �ִ´ٰ� �ϸ� �˾Ƽ� �ش� �ּ�(data, stack, heap)�� 1�� �־��ش�.
	int number = 1;

	// * �ּҸ� ��� �ٱ���
	// int �� �ٱ��ϸ� ���󰡸� int �ٱ��ϰ� �ִ�.
	int* pointer = &number;
	// pointer �ٱ��Ͽ� �ִ� �ּҸ� Ÿ�� �̵��ؼ� �ָ��ִ� �ٱ��Ͽ� 2�� �ִ´�.
	*pointer = 2;

	// �ο췹��(�����) �������� ���� �۵� ����� int*�� �Ȱ���
	int& reference = number;

	// C++ ���������� number��� �ٱ��Ͽ� �� �ٸ� �̸��� �ο��� ��
	// number��� �ٱ��Ͽ� reference��� �ٸ� �̸��� �����ش�.
	// ������ reference �ٱ��Ͽ��ٰ� �� �����ų� ������
	// ���� number �ٱ��Ͽ��� ���� �����ų� ������ �ȴ�.
	reference = 3;

	StatInfo info;
	CreateMonster(&info);

	PrintInfo(&info);
	PrintInfoByCopy(info);
	PrintInfo(info);

	cout << *pointer << endl;
	cout << number << endl;
	cout << reference << endl;

	return 0;
}