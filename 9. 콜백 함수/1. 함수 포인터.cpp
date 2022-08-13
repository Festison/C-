#include<iostream>
using namespace std;

int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

class Item
{
public:

public:
	int _itemId;  // ������ ID
	int _rarity;  // ��͵�
	int _ownerId; // ������ ID
};

Item* FindItemByItemId(Item items[], int itemCount, int itemId)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i]; 
		if (item ->_itemId==itemId)
		{
			return item;
		}
	}

	return nullptr;
}

Item* FindItemByRarity(Item items[], int itemCount, int rarity)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i]; 
		if (item->_rarity == rarity)
		{
			return item;
		}
	}

	return nullptr;
}

typedef bool(ITEM_SELECTOR)(Item* , int);

Item* FindItem(Item items[], int itemCount, ITEM_SELECTOR* selector, int value)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];
		// TODO ����
		if (selector(item, value))
		{
			return item;
		}
	}

	return nullptr;
}

bool IsRareItem(Item* item, int value)
{
	return item->_rarity >= value;
}

bool ISOwnerItem(Item* item, int ownerId)
{
	return item->_ownerId == ownerId;
}

int main()
{
	int a = 10;

	// �ٱ��� �ּ�
	// pointer [ �ּ� ] -> �ּ� [      ]

	typedef int DATA;
	// 1) ������		*
	// 2) �����̸�		pointer
	// 3) ������ Ÿ��	int
	DATA* pointer = &a;

	// �Լ�
	typedef int(FUNC_TYPE)(int a, int b);

	// 1) ������		*
	// 2) �����̸�		fn
	// 3) ������ Ÿ��	�Լ� (���ڴ� int, int ��ȯ�� int)
	FUNC_TYPE* fn;

	// �Լ� ������
	fn = Sub;

	// �Լ��� �̸��� �Լ��� ���� �ּ� (�迭�� ����)
	int result = fn(1, 2);
	cout << result << endl;
	
	int result2 = (*fn)(1, 2); // �Լ� �����ʹ� *(���� ������)�� �ٿ��� �Լ� �ּ��̴�.
	cout << result2 << endl;

	Item items[10] = { };
	items[3]._rarity = 2; // RARE
	Item* rareItem = FindItem(items, 10, ISOwnerItem, 100);
	Item* rareItem = FindItem(items, 10, IsRareItem, 100);

	return 0;

}