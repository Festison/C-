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
	
public:
	// ���ǵ��� ���� ����� �Լ�
	void operator =(const Knight& k) = delete; // �Լ��� ��� ���ϰڴٴ� �ǹ�
	

private:
	int _hp = 100;
};

class Admin
{
public:
	void CopyKnight(const Knight& k)
	{
		Knight k1;
		// ���� ����
		k1 = k;
	}
};

int main()
{
	Knight k1;
	
	Knight k2;

	// ���� ������
	k1 = k2;

	return 0;

}