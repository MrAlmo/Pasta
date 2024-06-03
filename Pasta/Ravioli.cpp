#include "Ravioli.h"

Ravioli::Ravioli(double _width, double _length, double _cookingTime):
	Pasta(_width, _length, _cookingTime)
{}

std::string Ravioli::Type() {
	return "Ravioli";
}
std::string Ravioli::Discription() {
	return "Square or round pillow shaped stuffed pastas, similar to dumplings.";
}