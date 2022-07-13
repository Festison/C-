#include<iostream>
using namespace std;

// 1) struct vs class

// C++������ struct�� class�� ���� ���� ���̴�.
// -> struct�� �׳� ����ü �������� ������ ǥ���ϴ� �뵵
// -> class�� ��ü ���� ���α׷����� Ư¡�� ��Ÿ���� �뵵

struct TestStruct // �⺻ ���� �����ڰ� public
{
public:
	int _a;
	int _b;
};

class TestClass // �⺻ ���� �����ڰ� private
{
private:
	int _a;
	int _b;
};

// 2) static ����, static �Լ� (static = ���� = ������)

class Marine
{
public:
	// Ư�� ���� ��ü�� ������
	int _hp;

	void TakeDamage(int damage)
	{
		_hp -= damage;
	}

	static void SetAttack()
	{
		s_attack = 100;
	}

	// Ư�� ���� ��ü�� ����
	// �����̶�� 'Ŭ����' ��ü�� ����
	static int s_attack; // ���赵�����θ� ����
};

// static ������ � �޸��ΰ�?
// �ʱ�ȭ �ϸ� .data
// �ʱ�ȭ ���ϸ� .bss
int Marine:: s_attack = 0; //��� ������ ���ݷ��� �ǵ帰��.

class Player
{
public:
	int _id; 
};

int GeneratedId()
{
	// �����ֱ�: ���α׷� ����/���� (�޸𸮿� �׻� �ö� �ִ�.)
	// ���ù���:

	// ���� ���� ��ü
	static int s_id = 1;

	return s_id++;
}

int main()
{
	Marine m1;
	m1._hp = 40;
	m1.TakeDamage(10);
	Marine::s_attack = 6;

	Marine m2;
	m2._hp = 40;
	m2.TakeDamage(10);

	// ���� ���ݷ� ���׷��̵� �Ϸ�! (Academy���� ���׷��̵� �Ϸ�)
	Marine::s_attack = 7;
	Marine::SetAttack();

	// �����̾ƴ϶� .data ������ �ö󰣴�.
	static int id = 10;
	int a = id;

	cout << GeneratedId() << endl;
	cout << GeneratedId() << endl;
	cout << GeneratedId() << endl;
	cout << GeneratedId() << endl;
	cout << GeneratedId() << endl;

	return 0;

}