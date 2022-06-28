#include<iostream>
using namespace std;

unsigned char flag; //��ȣ�� ���־� >> �� �ϴ��� ��ȣ��Ʈ�� ������� �ʴ´�.

// �ѹ� �������� ���� �ٲ��� ���� ����
// constant�� ������ const�� ���δ�. (������ ���ȭ)
// const�� ���϶� �ʱⰪ�� �ݵ�� �����ؾ� �Ѵ�.

const int AIR = 0;
const int STUN = 1;
const int POLYMORPH = 2;
const int INVINCIBLE = 3; 

// ���� ����

// [������ ����]
// .data (�ʱⰪ �ִ� ���)
int a = 2;

// .bss (�ʱⰪ ���� ���)
int b;

// .rodata (�б� ���� ������)
const char* msg = "Hello World";


int main()
{
	// [���� ����]
	int c; //���� ����

#pragma region ��Ʈ ����

	// �ǽ�
	// 0b0000 [����][����][����][���ߺξ�]

	// ���� ���·� �����.
	flag = (1 << INVINCIBLE);

	// ���� ���¸� �߰��Ѵ�. (���� + ����)
	flag |= (1 << POLYMORPH);

	// �������� Ȯ���ϰ� �ʹ�? (�ٸ� ���´� ���� ����)
	// bitmask
	bool invincible = ((flag & (1 << INVINCIBLE)) != 0);

	// �����̰ų� ���� �������� Ȯ���ϰ� �ʹ�.
	bool stunOrInvincible = ((flag & 0b1010) != 0);

#pragma endregion
	return 0;
}