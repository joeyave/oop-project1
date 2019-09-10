#pragma once
#include <iostream>

class Animal
{
private:
	std::string name;
	double weight;

	// Статическая переменная. Значение доступно всем 
	// объектам класса Animal.
	static int numOfAnimals;

public:
	// Гэттер. Метод для получения значения приватного
	// поля name.
	std::string GetName() { return name; }

	// Сэттер. Метод для присвоения значения переменной
	// name.
	void SetName(std::string name) { this->name = name; }

	double GetWeight() { return weight; }
	void SetWeight(double weight) { this->weight = weight; }

	// Конструктор. Вызывается каждый раз, когда создается объект.
	Animal(std::string, double);

	// Конструктор по-умолчанию.
	Animal();

	// Статический метод может обращаться только к статическим полям.
	static int GetNumOfAnimals() { return numOfAnimals; }

	// Функция, которая будет перегруженна.
	void ToString();
};

