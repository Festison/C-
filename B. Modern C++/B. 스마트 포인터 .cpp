#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<deque>
#include<set>
#include<algorithm>
using namespace std;

class Knight
{
public:
	Knight() { cout << "Kngiht ����" << endl; }
	~Knight() { cout << "Kngiht �Ҹ�" << endl; }

	void Attack()
	{
		if (_target)
		{
			_target->_hp -= _damage;
			cout << "HP: " << _target->_hp << endl;
		}
	}

public:
	int _hp = 100;
	int _damage = 10;
	Knight* _target = nullptr;
};

class RefCountBlock
{
public:
	int _refCount = 1;

};

template<typename T>
class SharedPtr
{
public:
	SharedPtr() { }
	SharedPtr(T* ptr) : _ptr(ptr)
	{
		if (_ptr != nullptr)
		{
			_block = new RefCountBlock();
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	SharedPtr(const SharedPtr& sptr) : _ptr(sptr._ptr), _block(sptr._block)
	{
		if (_ptr != nullptr)
		{
			_block->_refCount++;
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	void operator=(const SharedPtr& sptr)
	{
		_ptr = sptr._ptr;
		_block = sptr._block;

		if (_ptr != nullptr)
		{
			_block->_refCount++;
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	~SharedPtr()
	{
		if (_ptr != nullptr)
		{
			_block->_refCount--;
			cout << "RefCount : " << _block->_refCount << endl;

			if (_block->_refCount == 0)
			{
				delete _ptr;
				delete _block;
				cout << "Delete Data" << endl;
			}
		}
	}

public:
	T* _ptr;
	RefCountBlock* _block = nullptr;
};

int main()
{
	Knight* k1 = new Knight();
	Knight* k2 = new Knight();
	
	k1->_target = k2;

	delete k2;

	k1->Attack();

	// ����Ʈ ������ : �����͸� �˸´� ��å�� ���� �����ϴ� ��ü (�����͸� �����ؼ� ���)
	// shared_ptr, weak_ptrm unique_ptr
	
	shared_ptr<Knight> k1 = make_shared<Knight>();

	// k1[  2] k1���� k2�� �ֽ��ϰ��ֱ⋚���� �Ҹ� X
	// k2[  1]
	{
		shared_ptr<Knight> k2 = make_shared<Knight>();
		k1->_target = k2;
		k2->_target = k1;
	}

	k1->Attack();

	return 0;

}