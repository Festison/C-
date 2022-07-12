#include<iostream>
using namespace std;

// ������ �����ε� 
// �ϴ� [������ �Լ�]�� ���� �ؾ��Ѵ�.
// �Լ��� ����Լ� VS �����Լ��� ����, ������ �Լ��� �ΰ��� ������� ���� �� �ִ�.

// - ��� ������ �Լ� version
// - a op b ���¿��� �������� �������� ����� (a�� Ŭ�������� ����. a�� '���� �ǿ�����' ��� ��)
// - �Ѱ�) a�� Ŭ������ �ƴϸ� ��� ����

// - ���� ������ �Լ� version
// - a op b ���¶�� a,b ��θ� ������ �Լ��� �ǿ����ڷ� ������ش�
// - ��ǥ������ ���� ������ (a = b)�� ���� ������ version���δ� �� �����.

// ���� ���� ������
// ���� ������ ��, �ڱ� �ڽ��� ���� Ÿ���� ���ڷ� �޴� ��

// ��Ÿ
// - ��� �����ڸ� �� �����ε� �� �� �ִ� ���� �ƴϴ� ( :: . , * Ư������ �Ұ���)
// - ��� �����ڰ� �� 2�� ���� �ִ� �� �ƴϴ�. ++ --�� ��ǥ�� (���� ������)
// - ���� ������ ++ --
// - ���� ������ (++a) operator++()
// - ���� ������ (a++) operator++(int)

class Position
{
public:
	Position operator+(const Position& arg)
	{
		Position pos;
		pos._x = _x + arg._x;
		pos._y = _y + arg._y;
		return pos;

	}

	Position operator+(int arg)
	{
		Position pos;
		pos._x = _x + arg;
		pos._y = _y + arg;
		return pos;

	}

	// ���� ������ �Լ�
	bool operator==(const Position& arg)
	{
		return _x == arg._x && _y == arg._y;
	}

	// ���� ������ 
	// ��ü�� ����Ǳ⸦ ���ϴ� Ư¡���ִ�.
	Position& operator=(Position& arg)
	{
		_x = arg._x;
		_y = arg._y;

		// Position* this = ���ڽ��� �ּ�
		return *this; //���� ��ü�� �˼��ִ�.
	}

	Position& operator++()
	{
		_x++;
		_y++;
		return *this;
	}

	Position operator++(int)
	{
		Position ret = *this;
		_x++;
		_y++;
		return ret;
	}

public:
	int _x;
	int _y;
};


// ���� ������ �Լ�
Position operator+(int a, const Position& b)
{
	Position ret;

	ret._x = b._x + a;
	ret._y = b._y + a;

	return ret;
}

int main()
{
	int a = 1;
	int b = 2;
	int c = ++(++a);

	Position pos;
	pos._x = 0;
	pos._y = 0;

	Position pos2;
	pos._x = 1;
	pos._y = 1;

	Position pos3 = pos + pos2;

	Position pos4 = pos3 + 1;
	
	bool isSame = (pos3 == pos4);

	Position pos5;
	pos3._x=(pos5._x = 5); // �ݵ�� ���ʿ��� Ŭ������ �����ϰ� �ؾ��Ѵ�.

	pos3++;
	pos5.operator++(1);

	++(++pos3);

	return 0;

}