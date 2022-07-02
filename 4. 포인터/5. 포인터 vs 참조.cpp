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

// ���� ���� ���� ��� �ϴ� ����
StatInfo* FindMonster()
{
	// TODO : Heap �������� ������ ã�ƺ���.
	// ã��
	// return monster;

	return nullptr;
	// ���͸� ��ã��
}

StatInfo globalInfo;
// 1) �ּ� ���� ���
// [�Ű�����][RET][��������(info)][�Ű�����(&info)][RET][��������]
void PrintInfo(const StatInfo* info)
{
	if (info==nullptr) // null üũ ũ���� ���� �ذ�
	{
		return;
	}

	cout << "HP: " << info->hp << endl;
	cout << "ATT: " << info->attack << endl;
	cout << "DEF: " << info->defence << endl;

	// �� �ڿ� ���δٸ�?
	// info��� �ٱ����� �ּҸ� �ٲ� �� ����.
	// �ּҰ��� ���� ��Ų��.
	// info = &globalInfo;

	// �� ������ ���δٸ�?
	// info�� ����Ű�� �ִ� �ٱ����� ���빰�� �ٲ� �� ����.
	// info->hp = 10000;
}

// 2) ���� ���� ��� 
// �� ����ó�� ���ϰ� ���
// �ּ� ����ó�� �ּҰ��� �̿� �ϼ�����
void PrintInfo(StatInfo const& info)
{
	cout << "HP: " << info.hp << endl;
	cout << "ATT: " << info.attack << endl;
	cout << "DEF: " << info.defence << endl;

	
}

int main()
{
	StatInfo info;
	CreateMonster(&info);
	// 1) ���Ǽ� ����
	// �����ʹ� �ּҸ� �ѱ�� Ȯ���ϰ� ������ �ѱ�ٴ� ��Ʈ�� �ش�.
	// ������ �ڿ������� �𸣰� ����ĥ ���� �ִ�.
	// ex) ������� ��ģ�ٸ� const�� ����ؼ� ��������

	// �����͵� const�� ��밡��
	// * �������� �տ� ���̳� �ڿ� ���̳Ŀ� ���� �ǹ̰� �޶�����.

	// 2) �ʱ�ȭ ����
	// ���� Ÿ���� �ٱ����� 2��° �̸�
	// -> �����ϴ� ����� ������ �ȵ�
	// �����ʹ� �׳� � �ּҶ�� �ǹ�
	// -> ����� �������� ���� ���� �ִ�.
	// �����Ϳ��� '����'�� �ǹ� nullptr
	// ���� Ÿ���� �̷� nullptr�� ����.

	StatInfo* pointer = nullptr;
	pointer = &info;
	PrintInfo(pointer);

	StatInfo& reference = info;
	PrintInfo(reference);

	// ���� ��츦 ����� ��� pointer (null üũ ����)
	// �ٲ��� �ʰ� �д� �뵵�θ� ����ϸ� const ref&

	// �����ͷ� ����ϴ��� ������ �Ѱ��ַ���?
	// PrintInfoByRef(*pointer);

	// ������ ����ϴ��� �����ͷ� �Ѱ��ַ���?
	// PrintInfoByPtr(&reference);

	return 0;
}