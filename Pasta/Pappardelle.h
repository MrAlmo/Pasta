#pragma once
#include "Pasta.h"
class Pappardelle : public Pasta {

public:
	Pappardelle(double _width, double _length, double _cookingTime):
		Pasta(_width, _length, _cookingTime)
	{}

	std::string Type();
	std::string Discription();
};
