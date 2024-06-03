#pragma once
#include "Pasta.h"

class Tortellini : public Pasta {
	
public:
	Tortellini(double _width, double _length, double _cookingTime);

	std::string Type();
	std::string Discription();
};