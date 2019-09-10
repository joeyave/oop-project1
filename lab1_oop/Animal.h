#pragma once
#include <iostream>

class Animal
{
private:
	std::string name;
	double weight;

	// ����������� ����������. �������� �������� ���� 
	// �������� ������ Animal.
	static int numOfAnimals;

public:
	// ������. ����� ��� ��������� �������� ����������
	// ���� name.
	std::string GetName() { return name; }

	// ������. ����� ��� ���������� �������� ����������
	// name.
	void SetName(std::string name) { this->name = name; }

	double GetWeight() { return weight; }
	void SetWeight(double weight) { this->weight = weight; }

	// �����������. ���������� ������ ���, ����� ��������� ������.
	Animal(std::string, double);

	// ����������� ��-���������.
	Animal();

	// ����������� ����� ����� ���������� ������ � ����������� �����.
	static int GetNumOfAnimals() { return numOfAnimals; }

	// �������, ������� ����� ������������.
	void ToString();
};

