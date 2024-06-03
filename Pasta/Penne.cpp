#include "Penne.h"

Penne::Penne(double _width, double _length, double _cookingTime) :
	Pasta(_width, _length, _cookingTime)
{}

std::string Penne::Type() {
	return "Penne";
}
std::string Penne::Discription() {
	return "A short cylinder-shaped pasta that has angled edges.";
}