#include<iostream>
using namespace std;

int main()
{
	// �ּҸ� ��� �ٱ���
	int* p;

	// ����ó�� �������� ����
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	// - [�迭�� �̸�]�� �迭�� ���� �ּҰ��� ����Ű�� TYPE* �����ͷ� ��ȯ ����!;
	p = arr;

	// - [TYPE�� 1���� �迭] �� [TYPE*�� ������]�� ������ ȣȯ���� 
	cout << p[0] << endl;
	cout << arr[0] << endl;
	cout << p[5] << endl;
	cout << arr[5] << endl;
	cout << *p << endl;
	cout << *arr << endl;
	cout << *(p+3) << endl;
	cout << *(arr+3) << endl;

	// (2���� �迭 vs ���� ������)

	// [1][2][3][4]
	int arr2[2][2] = { {1, 2}, {3, 4} };

	// �ּ�2[ ] << 4����Ʈ
	// �ּ�1 [ �ּ�2 ]
	// pp[ �ּ�1 ]

	// [1][2]
	// [ �ּ� ]
	int(*p2)[2] = arr2; 
	cout << (*p2)[0] << endl;
	cout << (*p2)[1] << endl;
	cout << (*(p2+1))[0] << endl;
	cout << (*(p2+1))[1] << endl;

	cout << p2[0][0] << endl;
	cout << p2[0][1] << endl;
	cout << p2[1][0] << endl;
	cout << p2[1][1] << endl;


	return 0;

}