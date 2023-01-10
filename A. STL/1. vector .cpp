#include<iostream>
#include<vector>
using namespace std;

int main()
{
	// STL (Standard Template Library)
	// ���α׷����� �� �ʿ��� �ڷᱸ��/�˰������
	// ���ø����� �����ϴ� ���̺귯��

	// �����̳�(Container) : �����͸� �����ϴ� ��ü (�ڷᱸ�� Data Structure)

	// vector (���� �迭)
	// - vector�� ���� ���� (size/capacity)
	// - �߰� ����/����
	// - ó��/�� ����/����
	// - ���� ����
	
	// �迭	
	const int MAX_SIZE = 10;
	int arr[MAX_SIZE] = { };

	for (int i = 0; i < MAX_SIZE; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < MAX_SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	// ���� �迭
	// �ſ� �߿��� ���� -> �迭�� ���������� ���

	// 1) �������� �ΰ� �޸𸮸� �Ҵ��Ѵ�.
	// 2) �����б��� �� á����, �޸𸮸� �����Ѵ�.

	// Q1) �������� ��ŭ�� �����ұ�? 
	// Q2) ������ ��ŭ �ؾ� �ұ�?
	// Q3) ������ �����͸� ��� ó���ұ�?

	// size (���� ��� ������ ����)
	// 1 2 3 4 5 6 7

	// capacity (�������� ������ �뷮 ����)
	// 1 2 3 4 6 9 13 19 28 

	vector<int> v(1000, 0); // ���� 1000���� 0���� �ʱ�ȭ
	vector<int> v2 = v;

	v.resize(1000); // ������ ũ�⸦ ��������� ���� 

	v.reserve(1000); // ������ �������� ��������� ���� 
	// �ϴ� ���� : ���� �����͸� �����ϴ� ����� ���̱� ���ؼ�

	for (int i = 0; i < 1000; i++)
	{
		v.push_back(100); // �����͸� �߰�
		cout <<v[i]<<" " << v.size() << " " << v.capacity() << endl;
	}

	v.clear(); // �������� ũ�⸦ �ʱ�ȭ �������� ����	�ִ�.
	vector<int>().swap(v); // �ӽú��͸� �̿��� ������ ���� �ʱ�ȭ
	cout << v.size() << " " << v.capacity() << endl;

	return 0;

}