#include "Archer.h"
#include "Pet.h"

Archer::Archer(Pet* pet) : _pet(pet)
{
	
}

Archer::Archer(int hp) : Player(hp)
{
}

Archer::~Archer()
{
	// ��ſ��� �� �� :(
	if (_pet != nullptr)
		delete _pet;
}

void Archer::AddHp(int value)
{
	Player::AddHp(value);

	// �׾����� �굵 ������
	if (IsDead())
	{
		// Pet [ 0x100 ] -> 0x100 [ ���� �� �� ] 
		delete _pet;
		_pet = nullptr;
	}
}
