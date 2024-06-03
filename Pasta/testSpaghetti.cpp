#include "testSpaghetti.h"

void testTypeSpaghetti(Spaghetti a) {
	std::cout << a.Spaghetti::Type()<<std::endl;
}

void testDiscriptionSpaghetti(Spaghetti a) {
	std::cout << a.Spaghetti::Discription() << std::endl;
}

void testGetAllParametersSpaghetti(Spaghetti a) {
	std::cout << a.GetWidth() << std::endl;
	std::cout << a.GetLength() << std::endl;
	std::cout << a.GetCookingTime() << std::endl;

}