#include "Spaghetti.h"

Spaghetti::Spaghetti (double _width, double _length, double _cookingTime):
	Pasta(_width, _length, _cookingTime)
{}

std::string Spaghetti::Type() {
	return "Spaghetti";
}

std::string Spaghetti::Discription() {
	return "A long, thin, solid, cylindrical pasta";
}