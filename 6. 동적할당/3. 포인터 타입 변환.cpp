#include <iostream>
using namespace std;

class Knight
{
public:
	int _hp = 0;
};

class Item
{
public:
	Item()
	{
		cout << "Item()" << endl;
	}

	Item(int itemType) : _itemType(itemType)
	{
		cout << "Item(int itemType)" << endl;
	}

	Item(const Item& item)
	{
		cout << "Item(const Item&)" << endl;
	}

	virtual ~Item()
	{
		cout << "~Item()" << endl;
	}

	virtual void Test()
	{
		cout << "Test Item" << endl;
	}

public:
	int _itemType = 0;
	int _itemDbId = 0;

	char _dummy[4906] = {}; // �̷� ���� ������� ���� �������
};

enum ItemType
{
	IT_WEAPON = 1,
	IT_ARMOR = 2,
};

class Weapon : public Item
{
public:
	Weapon() : Item(IT_WEAPON)
	{
		cout << "Weapon()" << endl;
		_damage = rand() % 100;
	}

	virtual ~Weapon()
	{
		cout << "~Weapon()" << endl;
	}

	virtual void Test()
	{
		cout << "Test Weapon" << endl;
	}

public:
	int _damage = 0;
};

class Armor : public Item
{
public:
	Armor() : Item(IT_ARMOR)
	{
		cout << "Armor()" << endl;
	}

	virtual ~Armor()
	{
		cout << "~Armor()" << endl;
	}

	virtual void Test()
	{
		cout << "Test Armor" << endl;
	}

public:
	int _defence = 0;
};

void TestItem(Item item)
{

}

void TestItemPtr(Item* item)
{

}

int main()
{
	// ����
	{
		// Stack [type(4) dbid(4) dummy(4096) ]
		Item item;

		// Stack [ �ּ�(4~8) ] -> Heap �ּ� [type(4) dbid(4) dummy(4096) ]
		Item* item2 = new Item();
		
		TestItem(item);
		TestItem(*item2);

		TestItemPtr(&item);
		TestItemPtr(item2);

		// �޸� ���� -> ���� ���� �޸𸮰� �پ�� Crash �߻�
		delete item2;
	}

	// �迭
	{
		cout << "----------------------------------" << endl;

		// ��¥ �������� 100�� �ִ� �� (���� �޸𸮿� �ö�� �ִ�)
		Item item3[100] = {};

		cout << "----------------------------------" << endl;

		// �������� ����Ű�� �ٱ��ϰ� 100�� ���� �������� 1��������.
		Item* item4[100] = {};

		for (int i = 0; i < 100; i++)
		{
			item4[i] = new Item();
		}

		cout << "----------------------------------" << endl;

		for (int i = 0; i < 100; i++)
		{
			delete item4[i];
		}

		cout << "----------------------------------" << endl;
	}

	// �������� ���� Ŭ���� ������ ������ ��ȯ �׽�Ʈ
	{
		// Stack [ �ּ� ] -> Heap [ _hp(4) ]
		Knight* knight = new Knight();

		// �Ͻ������δ� �Ұ���
		// ��������δ� ����

		// Stack [ �ּ� ]
		//Item* item = (Item*)knight;
		//item->_itemType = 2;
		//item->_itemDbId = 1;
		
		delete knight;
	}

	// �θ� -> �ڽ� ��ȯ �׽�Ʈ
	{
		Item* item = new Item();

		// [  [ Item ]  ]
		// [   _damage  ]
		//Weapon* weapon = (Weapon*)item; �߸��� �޸� �Ҵ� ũ���� �߻�
		//weapon->_damage = 10;

		delete item; 
	}

	// �ڽ� -> �θ� ��ȯ �׽�Ʈ
	{
		Weapon* weapon = new Weapon();

		Item* item = weapon;

		delete weapon;
	}

	// ��������� Ÿ�� ��ȯ�� �� ���� �׻� �����ؾ��Ѵ�.

	Item* inventory[20] = {};

	srand((unsigned int)time(nullptr));
	for (int i = 0; i < 20; i++)
	{
		int randValue = rand() % 2; // 0~1
		switch (randValue)
		{
		case 0:
			inventory[i] = new Weapon();
			break;
		case 1:
			inventory[i] = new Armor();
			break;
		}
	}

	for (int i = 0; i < 20; i++)
	{
		Item* item = inventory[i];
		if (item == nullptr)
		{
			continue;
		}

		if (item->_itemType == IT_WEAPON)
		{
			Weapon* weapon = (Weapon*)item; // ������ ���Ⱑ �ƴϿ����� �߸��� ����
			cout << "Weapon Damage : " << weapon->_damage << endl;
		}
	}

	// *********************** �ſ� �߿� ************************
	// �Ҹ��ڸ� item�� �ƴ� weapon�� armor�� �޾���� �Ѵ�.
	for (int i = 0; i < 20; i++)
	{
		Item* item = inventory[i];
		if (item == nullptr)
		{
			continue;
		}

		/* if (item->_itemType == IT_WEAPON) // �Լ��� ���� �Լ��� ������ ������ �� �����ؾ��Ѵ�.
		{
			Weapon* weapon = (Weapon*)item; 
			delete weapon;
		}
		else
		{
			Armor* armor = (Armor*)item;
			delete armor;
		}
		*/

		delete item;
	}

	// [���]
	// ������ vs �Ϲ� Ÿ�� : �޸� ������ ���̸� ��������
	// ������ ������ Ÿ�� ��ȯ�� �� ���� �ſ� �����ؾ��Ѵ�.
	// �θ� �ڽ� ���迡�� �θ� Ŭ������ �Ҹ��ڿ��� ����� ���� virtual�� ������

	return 0;

}
