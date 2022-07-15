#include<iostream>
using namespace std;

// 1) static_cast
// 2) dynamic_cast
// 3) const_cast
// 4) reinterpret_cast

class Player 
{
public:
	virtual ~Player() { }
};

class Knight : public Player
{

};

class Archer : public Player
{

};

class Dog
{

};

void PrintName(char* str)
{
	cout << str << endl;
}

int main()
{
	// static_cast : Ÿ�� ��Ģ�� ���纼 �� ������� ĳ���ø� ������ش�.
	// 1) int <-> float
	// 2) Player* -> Knight* (�ٿ� ĳ����) << �� , ������ ���� ����

	int hp = 100;
	int maxHp = 200;
	float ratio = static_cast<float>(hp) / maxHp; 

	// �θ� -> �ڽ� �ڽ� -> �θ�
	Player* p = new Knight();
	Knight* k1 = static_cast<Knight*>(p);

	// dynamic_cast : ��� ���迡���� ������ ����ȯ
	// RTTI (Runtime Type Information)
	// �������� Ȱ���ϴ� ���
	// virtual �Լ��� �ϳ��� ����� ��ü�� �޸𸮿� ���� �Լ� ���̺� �ּҰ� ���Եȴ�.
	// ���� �߸��� Ÿ������ ĳ������ ������ nullptr ��ȯ ************
	// �̸� �̿��ؼ� �´� Ÿ������ ĳ������ �ߴ��� Ȯ���� �Ѵ�.
	Knight* k2 = dynamic_cast<Knight*>(p);

	// const_cast : const�� ���̰ų� ���ų� �Ҷ� Ȱ��
	PrintName(const_cast<char*>("Festion"));

	// reinterpret_cast
	// ���� �����ϰ� ������ ������ ĳ����
	// �����Ͷ� ���� ������� �ٸ� Ÿ������ ��ȯ �ϰ���� �� ���
	long long address = reinterpret_cast<long long>(k2);

	Dog* dog1 = reinterpret_cast<Dog*>(k2);

	void* p = malloc(1000);
	Dog* dog2 = (Dog*)p;

	return 0;

}