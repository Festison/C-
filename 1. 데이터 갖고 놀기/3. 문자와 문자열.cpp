#include<iostream>
using namespace std;

//char �� �������� '����' �ǹ̸� ��Ÿ���� ���� ���
// char : ���ĺ� / ���� ���ڸ� ��Ÿ����
// wchar_t : �����ڵ� ���ڸ� ��Ÿ����

char ch = 97; // ASCII �ڵ�����ؼ� A�� ���
char ch2 = 'a'; //������ �ǹ̷� ���� ����ǥ '' ���
char ch3 = '1';
char ch4 = 'a' + 1;

//�� ���� ��� ���ڿ� ���� ���� �ڵ带 �ο��� ���� �����ڵ�
//�����ڵ�� ǥ�� ����� ���������� �ִµ� ��ǥ������ UTF8 UTF16�� �ִ�.

wchar_t wch = L'��';

//Escape Sequence
// ǥ���ϱ� �ָ��� �ֵ��� ǥ��
// \0 = �ƽ�Ű�ڵ�0 = NULL
// \t = �ƽ�Ű�ڵ�9 = tab
// \n = �ƽ�Ű�ڵ�10 = LineFeed (���� �Ʒ���)
// \r = �ƽ�Ű�ڵ�13= Carriagereturn (Ŀ�� <<)

// ���ڿ�
// ���ڵ��� ���� ��� �� �ִ� �� 
// ���� NULL (0)

char str[] = { 'h','e','l','l','o','\0'};
char str2[] = "Hello World"; // �������� 0 �������� �迭�� ũ�Ⱑ 12��������.

int main()
{
	cout << ch << endl;
	cout << ch2 << endl;
	cout << ch3 << endl;
	cout << ch4 << endl;

	wcout.imbue(locale("kor"));
	wcout << wch << endl;

	cout << str << endl;
	cout << str2 << endl;

	return 0;

}