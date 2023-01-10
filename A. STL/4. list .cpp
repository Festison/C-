#include<iostream>
#include<list>
using namespace std;

// vector : ���� �迭
// [   push   ]
// [   push   ] capacity ]

// Node [  data(4) next(4/8)  ]  -> Node [  data(4) next(4/8)  ] 
class Node
{
public:
	Node* _next;
	int   _data;
};

// ���� / ���� / ����
// list : ���� ����Ʈ 

// [1] -> [2] -> [3] -> [4] -> [5]
// [1] <-> [2] <-> [3] <-> [4] <-> [5]
// [1] <-> [2] <-> [3] <-> [4] <-> [5] <-> [1]


int main()
{
	// list (���� ����Ʈ)
	// - list�� ���� ����
	// - �߰� ����/���� (GOOD / GOOD)
	// - ó��/�� ����/���� (GOOD / GOOD)
	// - ���� ���� (i���� �����ʹ� ��� �ֽ��ϱ�?) �����.
	
	list<int> li;

	list<int>::iterator itRemember;

	for (int i = 0; i < 100; i++)
	{
		if (i==50)
		{
			itRemember = li.insert(li.end(), i);
		}
		else
		{
			li.push_back(i);
		}
	}

	int size = li.size();

	int first = li.front();
	int last = li.back();

	list<int>::iterator itBegin = li.begin();
	list<int>::iterator itEnd = li.end();

	// list<int>::iterator itTest1 = --itBegin; ��ó������ �������δ� �ڷΰ��� ������ �Ͼ��.
	// list<int>::iterator itTest2 = --itEnd; ����Ʈ�� ��ĭ �̵��� ����
	// list<int>::iterator itTest3 = ++itEnd;

	int* ptrBegin = &(li.front());
	int* ptrEnd = &(li.back());

	for (list<int>::iterator it = li.begin(); it != li.end(); ++it)
	{
		cout << *it << endl;
	}

	li.insert(itBegin, 100);

	li.erase(li.begin());

	li.pop_front();

	li.remove(10);

	// * ���� ������ �� �ȴ�
	// * �߰� ����/���� ������
	// 50�� �ε����� �ִ� �����͸� ����
	list<int>::iterator it = li.begin();
	for (int i = 0; i < 50; i++)
	{
		++it;
	}

	li.erase(itRemember);

	return 0;

}