#pragma once
#include "Pasta.h"

class Lasagna : public Pasta {

public:
	Lasagna(double _width, double _length, double _cookingTime);

	std::string Type();
	std::string Discription();
};
