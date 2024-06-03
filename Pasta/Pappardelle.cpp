#include "Pappardelle.h"

Pappardelle::Pappardelle(double _width, double _length, double _cookingTime):
	Pasta(_width, _length, _cookingTime)
{}

std::string Pappardelle::Type() {
	return "Pappardelle";
}
std::string Pappardelle::Discription() {
	return "Long, flat and broad ribbons of (traditionally) egg pasta.";
}