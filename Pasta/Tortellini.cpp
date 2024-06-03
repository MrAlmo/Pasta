#include "Tortellini.h"

Tortellini::Tortellini(double _width, double _length, double _cookingTime) :
	Pasta(_width, _length, _cookingTime)
{}

std::string Tortellini::Type() {
	return "Tortellini";
}
std::string Tortellini::Discription() {
	return "A ring-shaped Italian pasta stuffed with cheese or meat.";
}