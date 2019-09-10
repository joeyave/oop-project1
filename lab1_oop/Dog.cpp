#include "pch.h"
#include "Dog.h"
#include <string>
#include <iostream>

// �������� ����������� Animal, � ��� ����������� �������� ���� sound.
Dog::Dog(std::string name, double weight, std::string sound) :
	Animal(name, weight) 
{
	this->sound = sound;
}

void Dog::ToString()
{
	std::cout << this->GetName() << " is " << this->GetWeight() <<
		" kgs in weight and says " << this->GetSound() << "\n";
}
