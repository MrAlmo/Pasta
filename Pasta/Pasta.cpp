#include "Pasta.h"

Pasta::Pasta(double _width, double _length, double _cookingTime) :
	width(_width),
	length(_length),
	cookingTime(_cookingTime)
{}

double Pasta::GetWidth() const{
	return width;
}

double Pasta::GetLength() const{
	return length;
}

double Pasta::GetCookingTime() const{
	return cookingTime;
}

void Pasta::SetWidth(double _width) {
	width = _width;
}

void Pasta::SetLength(double _length) {
	length = _length;
}

void Pasta::SetCookingTime(double _cookingTime) {
	cookingTime = _cookingTime;
}