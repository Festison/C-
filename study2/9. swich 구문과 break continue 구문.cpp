#include<iostream>

using namespace std;

int main() {
	
	int a;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "�Է��Ͻ� ���� 1 �Դϴ�.";
		break;
	case 2:
		cout << "�Է��Ͻ� ���� 2�Դϴ�.";
		break;

	default:
		cout << "�Է��Ͻ� ���� 1,2 �̿��� �ٸ� ���Դϴ�.";
	}

	cout << "����ġ���� �������ϴ�.";

	return 0;
}