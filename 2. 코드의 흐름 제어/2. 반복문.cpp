#include<iostream>
using namespace std;

int main()
{
	// while for - ���ȿ�
	// // �� ���� �����ϴ°� �ƴ϶� Ư�� ���Ǳ��� ��� �ݺ��ؾ� �ϴ� ��Ȳ�� ���
	// ex) �������� �����Ҷ����� ��� �̵��ض�

	int count = 0;

	while (count < 5 )
	{
		cout << "Hello world" << endl;
		count++;
	}

	do // while���� �ٸ��� ���� �ִ� ������ �ѹ��� ���
	{
		cout << "Hello world" << endl;
	} while (false);


	// for��
	// break; continue;

	for ( int count = 0; count < 5; count++)
	{
		cout << "Hello world" << endl;
	}

	// �������� �帧 ���� break continue

	int round = 1;
	int hp = 100;
	int damage = 10;

	// ���� ���� ����
	while (true)
	{
		hp -= damage;
		if (hp < 0)
			hp = 0; // ���� ü���� 0���� ����

		// �ý��� �޽���
		cout << "Round " << round << " ���� ü�� " << hp << endl;

		if (hp == 0)
		{
			cout << "���� óġ!" << endl;
			break;
		}

		if (round == 5)
		{
			cout << "���� ���� ����" << endl;
			break;
		}

		round++;
	}

	// 1~10 ������ Ȧ���� ����ϱ�

	for (int i = 1; i <=10; i++)
	{
		bool isEven = (i % 2) == 0;

		if (isEven)
			continue;
		
		cout << i << endl;
		
	}

	return 0;
}