#pragma once
#include "Pasta.h"

class Spaghetti : public Pasta {
public:
	Spaghetti(double _width, double _length, double _cookingTime);
	

	std::string Type();
	std::string Discription();
};