#include<iostream>

using namespace std;

void hellCPP(int);
//�Լ�(�Ű�����)

int sub1() {
	/*
	1. �Լ� ���� ����
	2. �Լ� ���� ����
	3. �Լ� ȣ��
	���ϰ��� �ִ� Ÿ��
	���ϰ��� ���� Ÿ��
	*/
	int times;
	cout << "������ �Է��Ͻÿ�." << endl;
	cin >> times;
	hellCPP(times);

	return 0;
}

void hellCPP(int n) {
	for (int i = 0; i < n; i++)
		cout << "Hello, C++!" << endl;
}