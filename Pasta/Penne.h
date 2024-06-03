#pragma once
#include "Pasta.h"

class Penne : public Pasta {
public:
	Penne(double _width, double _length, double _cookingTime);

	std::string Type();
	std::string Discription();
};