#pragma once
#include "Animal.h"
#include <string>
#include <iostream>

class Dog :
	public Animal
{
private:
	std::string sound = "Wooof";
public:
	std::string GetSound() { return this->sound; }

	void MakeSound()
	{
		std::cout << "The dog " <<
			this->GetName() << " says " <<
			this->sound << "\n";
	}

	Dog(std::string, double, std::string);

	// ����������� ��-��������� �������� ����������� Animal.
	Dog() : Animal() {};

	void ToString();
};

