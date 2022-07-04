#include<iostream>
using namespace std;

// 1) Swap �Լ� �����
void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 2) ���� �Լ� ����� (���� ���ڰ� ���� ������ ����)
void Sort(int numbers[], int count)
{
	for (int i = 0; i < count; i++)
	{
		// i��° ���� ���� ���� �ĺ���� ����
		int best = i;

		// �ٸ� �ĺ��� �񱳸� ���� ���� ���� �ĺ��� ã�´�.
		for (int j = i+1; j < count; j++)
		{
			if (numbers[j] > numbers[best])
				best = j;
		}

		// ���� ���� �ĺ��� ��ü
		if (i != best)
			Swap(numbers[i], numbers[best]);
	}
}

// 3) �ζ� ��ȣ ������
void ChooseLotto(int numbers[])
{
	// TODO : �������� 1~45 ������ ���� 6���� ����ּ���! (��, �ߺ��� ����� �Ѵ�)
	srand((unsigned)time(0));

	int count = 0;
	while (count !=6)
	{
		int randValue = 1 + (rand() % 45);

		// �̹� ã�� ���ΰ�?
		bool found = false;
		for (int i = 0; i < count; i++)
		{
			if (numbers[i] == randValue)
			{
				found = true;
				break;
			}
		}

		// �� ã������ �߰�
		if (found==false)
		{
			numbers[count] = randValue;
			count++;
		}
	}

	Sort(numbers, 6);
}

int main()
{
	// 1) Swap �Լ� �����
	int a = 1;
	int b = 2;
	Swap(a, b);
	// a = 2, b = 1

	// 2) ���� �Լ� ����� (���� ���ڰ� ���� ������ ����)
	int numbers[6] = { 1, 42, 3, 15, 5, 6 };

	int size1 = sizeof(numbers); // 24
	int size2 = sizeof(int); // 4

	Sort(numbers, sizeof(numbers) / sizeof(int));

	// 3) �ζ� ��ȣ ������
	ChooseLotto(numbers);

	// �ζ� �� �ϼ�
	for (int i = 0; i < 6; i++)
	{
		cout << numbers[i] << endl;
	}

	return 0;

}