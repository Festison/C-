#include<iostream>
#include <cstring>

using namespace std;

int main() {

	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "�ȳ��ϼ���! ����" << name2;
	cout << "�Դϴ�! ������ ��� �ǽó���?\n";
	cin.getline(name1, Size);
	cout << "��," << name1 << "��,����� �̸���";
	cout << strlen(name1) << "���Դϴٸ�\n";
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";
	name2[3] = '\0';
	cout << "�� �̸��� ù �����ڴ� ������ �����ϴ�: ";
	cout << name2 << endl;

	//C++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string 
	/*
	c��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� �� �ִ�.
	cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
	cout�� ����Ͽ� string ��ü�� ���÷����� �� �ֵ�.
	�迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.
	�迭�� �ٸ� �迭�� �뤊�� ������ �� ����.
	>> string������ ���� 
	*/
	
	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	//char1 = char2 �� �ٸ���
	str1 = str2; //�´�
	cout << str1 << endl;

	return 0;
}