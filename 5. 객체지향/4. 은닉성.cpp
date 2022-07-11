#include<iostream>
using namespace std;

// ���м�
// ���� �Ǵ°��� �����.
// ���� : 1) �ǵ帮�� �ȵǴ� ��� 2) �ٸ� ��η� �����ϱ� ���ϴ� ���

// public (������) protected(��ȣ�޴�) private (������)
// - public : �������׳� ����
// - protceted : ���� �ڼյ����׸� ���
// - private : ���� ��밡�� << class Car ���ο����� ��� ����

// ��� ���� ������: ���� �������� ������ ��� ��������?
// �θ������ �������� ������ �� �� �ڼյ鿡�Ե� �Ȱ��� ������� �ϴ� ���� �ƴϴ�.
// - public : ������ ��� , �θ���� ���� ���� �״�� (public -> public, protected -> portected)
// - protceted : ��ȣ�޴� ��� , �� �ڼյ鿡�Ը� ������ (public -> protected, protected -> protected)
// - private : ������ ��� , �������� ���� �ڼյ鿡�Ե� �� �����ش�. (public -> private, protected -> private)

class Car
{
public: // ���� ������
	void MoveHandle() { }
	void PushPedal() { }
	void OpenDoor() { }

	void TurnKey()
	{
		RunEngine();
	}

protected:
	void DisassembleCar() { } // ���� �����Ѵ�.
	void RunEngine() { } // ������ ������Ų��.
	void ConnectCircuit() { } // ���⼱ ����

public:

};

class SuperCar : private Car // ��� ���� ������
{
public:
	void PushRemoteController()
	{
		RunEngine();
	}

};

class TestSuperCar : SuperCar
{
public:
	void Test()
	{
	
	}
};

// ĸ��ȭ
// ������ �����Ϳ� �Լ��� �������� ������� ��
class Berserker
{
public:

	int GetHp() { return _hp; }

	void SetHp(int hp)
	{
		_hp = hp;
		if (_hp <= 50)
		{
			SetBerserkerMode();
		}
	}

	// ��� : ü���� 50���Ϸ� �������� ��������.

private:
	void SetBerserkerMode()
	{
		cout << "�ſ� ��������." << endl;
	}

private:
	int _hp = 100;
};

int main()
{
	SuperCar car;
	car.PushRemoteController();
	
	Berserker b;

	b.SetHp(20);

	TestSuperCar car;
	car.PushRemoteController();

	return 0;

}