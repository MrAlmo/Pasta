#include "Lasagna.h"

Lasagna::Lasagna(double _width, double _length, double _cookingTime):
	Pasta(_width, _length, _cookingTime)
{}

std::string Lasagna::Type() {
	return "Lasagna";
}
std::string Lasagna::Discription() {
	return "A wide, flat sheet of pasta.";
}