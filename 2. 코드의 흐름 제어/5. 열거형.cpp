#include<iostream>
using namespace std;


const int SCISSORS = 1;
const int ROCK = 2;
const int PAPER = 3;

// ���ڸ� ���� ���ϸ� ù ���� 0���� ����
// �� ���� ������ ���� �� + 1
enum ENUM_SRP
{
	ENUM_SCISSORS =1,
	ENUM_ROCK,
	ENUM_PAPER

};

// #�� ������ -> ��ó�� ���ù�
// 1)��ó�� 2) ������ 3) ��ũ
#define DEFINE_SCISSORS 1 
#define DEFINE_TEST cout<<"Hello World"<<endl;

int main()
{

	DEFINE_TEST;

	if (ENUM_SCISSORS) // 1�� ���� 
	{

	}

	return 0;
}