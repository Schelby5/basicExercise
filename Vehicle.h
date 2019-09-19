#pragma once
class Vehicle
{
public:
	Vehicle();
	~Vehicle();

	int GetNumberOfWheels();

private:
	int _wheels;

	// Code conventions
	// camelCase - metode unutar klase
	// PascalCase - imena klasa
	// snake_case
	// SCREAMING_SNAKE_CASE
	// kebab-case
};

