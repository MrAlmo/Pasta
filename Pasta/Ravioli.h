#pragma once
#include "Pasta.h"

class Ravioli : public Pasta {
	
public:
	Ravioli(double _width, double _length, double _cookingTime);

	std::string Type();
	std::string Discription();
};
