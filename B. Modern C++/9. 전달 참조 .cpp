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
	Knight() { cout << "�⺻ ������" << endl; }
	Knight(const Knight&) { cout << "���� ������" << endl; }
	Knight(Knight&&) noexcept { cout << "�̵� ������" << endl; }
};

void Test_RValueRef(Knight&& k) // ������ ����
{

}

void Test_Copy(Knight k)
{

}

template<typename T>
void Test_ForwardingRef(T&& param) // ���� ����
{
	std::move(param); // �ް� ������ ������ �����Ǿ�� �ϴ� ��Ȳ���� ��� X

	Test_Copy(std::forward<T>(param)); // ���� ������ ����� �� �̿�

	// �ް� ������� ����
	Test_Copy(param);

	// ������ ������� �̵� 
	Test_Copy(std::move(param));
}

int main()
{
	// ���� ����
	// ���� ����

	// &&    &�� �ι� -> ������ ����

	Knight k1;

	Test_RValueRef(std::move(k1)); // rvalue_cast

	Test_ForwardingRef(k1);
	Test_ForwardingRef(std::move(k1));

	auto&& k2 = k1; // �ް� ����
	auto&& k3 = std::move(k1); // ������ ����

	// ������ : ���� ���� (type deduction)�� �Ͼ ��

	// ���� ������ �����ϴ� ���
	// -------------------------------

	Knight& k4 = k1; // �ް� ���� (����)
	Knight&& k5 = std::move(k1); // ������ ���� (�̵�)

	// ������ : ���ϽĿ��� ����� ��� X
	// ������ ���� : �������� ������ �� �ִ� ���� Ÿ��
	Test_RValueRef(std::move(k5));

	Test_ForwardingRef(k1);
	Test_ForwardingRef(std::move(k1));

	

	return 0;

}