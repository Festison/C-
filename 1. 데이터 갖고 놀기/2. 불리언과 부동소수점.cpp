#include<iostream>
using namespace std;


// �Ҹ���� �Ǽ�

// �Ҹ���(boolean) ��/����
bool isHighLevel = true; // 1�� ����
bool isPlayer = true; 
bool isMale = false;  // 0�� ����

// bool = 1����Ʈ ����

//�Ǽ� (�ε��Ҽ���)
// ex) float double

//�ε� �Ҽ���: . �� ���������� �������� ǥ���ϴ� ���
//1) ����ȭ = 0.31415926535 * 10 
//2) 31415926535 (��ȿ����) 1 (����)

float attackSpeed = -3.375f; // 4����Ʈ
double attackSpeed2 = 123.4123; // 8����Ʈ

// ex) -3.375��� ���� ����
// 1) 2���� ��ȯ = (3) + (0.375) = 0b11 + Ob0.011 = 0b11.011
// 2) ����ȭ 0b11.011 * 2^1
// 1(��ȣ) 1(����) 1011(��ȿ����)
// �� ������ unsigned byte��� �����ϰ� ���� +127�� ������ش�
// ���� ��� : 0b 1 100000000 10110000'0000'0000'0000'0000

// ���α׷����� �� �� �ε��Ҽ����� �׻� ' �ٻ簪' �̶�� ���� ���
// �Ǽ� 2���� ==���� ���ϴ� ���� ����

int main() 
{

	cout << isHighLevel << endl;
	cout << attackSpeed << endl;
	cout << attackSpeed2 << endl;

	return 0;
}