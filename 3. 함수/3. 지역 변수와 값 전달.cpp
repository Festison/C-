#include<iostream>
using namespace std;

// ������ ���� : ���� ������ �� ����

// ���� ���� ������ ����
// ����) �ʱ�ȭ ����, const �� , rodata, data ,bss
int globalValue = 0;

void Test()
{
	cout << "���� ������ ���� : " << globalValue << endl;

}

void IncreaseHp(int hp)
{
	hp = hp + 1;
}

// [[�Ű�����][RET][��������(hp=1)] [�Ű�����(hp=2)][RET][��������]]
int main()
{
	cout << "���� ������ ���� : " << globalValue << endl;
	globalValue++;

	Test();

	// ���� ����
	int localValue = 0;
	localValue++;

	int hp = 1;

	cout << "Increase ȣ�� �� : " << hp << endl;
	IncreaseHp(hp); //�������� int hp �� �켱�̿��� hp�ּҿ� 1�� ���ִ�.
	cout << "Increase ȣ�� �� : " << hp << endl;

	return 0;
}