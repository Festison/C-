#include<iostream>

using namespace std;

int sub8() {
	//�� ǥ����
	//����, ���� , ������ ������

	//���� || 
	//���� &&
	//�� ���� !

	cout << "����� ���̸� �Է��Ͻʽÿ�.";
	int age;
	cin >> age;

	if (age < 0 || age>100) {
		cout << "������ �Ͻø� �ȵ˴ϴ�," << endl;
	}
	else if (20 <= age && age <= 29) {
		cout << "����� 20�� �̱���?" << endl;
	}
	else {
		cout << "����� ���̸� �𸣰ڽ��ϴ�.";
	}
	return 0;
}