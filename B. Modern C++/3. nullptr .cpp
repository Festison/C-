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

};

Knight* FindKnight()
{

	return nullptr;
}

void Test(int a)
{
	cout << "Test(int)" << endl;
}

void Test(void* ptr)
{
	cout << "Test(*)" << endl;
}

// Nullptr ����

const
class
{
public:
	// �� � Ÿ���� �����Ϳ͵� ġȯ ����
	template<typename T>
	operator T* () const
	{
		return 0;
	}

	// �� � Ÿ���� ��� �����Ϳ͵� ġȯ ����
	template<typename C, typename T>
	operator T C::* () const
	{
		return 0;
	}

private:
	void operator&() const; // �ּҰ� &�� ���´�.

} _nullptr;

int main()
{
	int* ptr = NULL;
	// 0 NULL

	// 1) ������
	Test(0);
	Test(NULL); 
	Test(_nullptr);

	// 2) ������
	auto knight = FindKnight();
	if (knight == _nullptr);
	{

	}

	&

	// nullptr_t whoami = _Nullptr;


	return 0;

}