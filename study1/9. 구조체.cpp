#include<iostream>

using namespace std;

int main() {
	//����ü : �ٸ� ���������� ���Ǵ� �������� ����
	// �迭 : ���� ���������� ���� 

	//�౸����
	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
	};

	MyStruct A = {
		"Son","Striker",183,77
	};

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;

	MyStruct B[2] = {
		{"A","A",1,1},
		{"B","B",2,2}
	};
	
	cout << B[0].height<<endl;


	return 0;

}