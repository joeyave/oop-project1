#include "pch.h"
#include "Animal.h"
#include <string>
#include <iostream>

// Обращаться к полям и методам класса можно с помощью ::
int Animal::numOfAnimals = 0;

Animal::Animal(std::string name, double weight) 
{
	this->name = name;
	this->weight = weight;
	Animal::numOfAnimals++;
}

Animal::Animal()
{
	this->name = "Stranger";
	this->weight = 0;
	Animal::numOfAnimals++;
}

void Animal::ToString() 
{
	std::cout << this->GetName() << " is " <<  
		this->GetWeight() <<
		" kgs in weight\n";
}