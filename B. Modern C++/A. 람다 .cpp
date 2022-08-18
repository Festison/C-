#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<deque>
#include<set>
#include<algorithm>
using namespace std;

// ���� : �Լ���ü�� ���ϰ� ����� ���

enum class ItemType
{
	None,
	Armor,
	Weapon,
	Jewelry,
	Consumable
};

enum class Rarity
{
	Common,
	Rare,
	Unique
};

class Item
{
public:
	Item() { }
	Item(int itemId, Rarity rarity, ItemType type)
		: _itemId(itemId), _rarity(Rarity), _type(type)
	{

	}

public:
	int _itemId =0;
	Rarity _rarity = Rarity::Common;
	ItemType _type = ItemType::None;
};

int main()
{
	vector<Item> v;
	v.push_back(Item(1, Rarity::Common, ItemType::Weapon));
	v.push_back(Item(2, Rarity::Common, ItemType::Armor));
	v.push_back(Item(3, Rarity::Rare, ItemType::Jewelry));
	v.push_back(Item(4, Rarity::Unique, ItemType::Weapon));

	// ���� = �Լ� ��ü�� �ս��� ����� ����
	// ���� ��ü�� C++11�� ���ο� ����� �� ���� �ƴϴ�

	{
		struct FindItem
		{
			FindItem(int itemId, Rarity rarity, ItemType type)
				: _itemId(itemId), _rarity(rarity), _type(type)
			{

			}

			bool operator() (Item& item)
			{
				return item._itemId == itemId && item._rarity == rarity && item._type == type;
			}

			int _itemId;
			Rarity _rarity;
			ItemType _type;
		};

		int itemId = 4;
		Rarity rarity = Rarity::Unique;
		ItemType type = ItemType::Weapon;

		// [ ] ĸó : �Լ� ��ü ���ο� ������ �����ϴ� ����� ���� 
		// ������ ķó�ϵ� �������� ��´ٰ� ����
		// �⺻ ĸó ��� : ��(����) ���(=), ���� ���(&)
		// �������� ĸó ��带 �����ؼ� ��� ���� : �� ���[itemId], ���� ���[&itemId] 

		auto findByItem = [itemId](Item& item) {return item._itemId == itemId; }; // [&]�������� Ȱ�� [=] ������ ���� Ȱ��

		auto findIt = std::find_if(v.begin(), v.end(), FindItem(itemid, rarity, type));

		if (findIt != v.end())
		{
			cout << "������ID: " << findIt->_itemId << endl;
		}
	}

	{
		class Knight
		{
		public:
			auto ResetHpJob()
			{
				auto f = [this]() 
				{
					this->_hp = 200;
				};


				return f;

			}

		public:
			int _hp = 100;
		};

		Knight* k = new Knight();
		auto job = k->ResetHpJob();
		delete k;
		job();
	}

	// [ĸó](���ڰ�) {������}

	return 0;

}