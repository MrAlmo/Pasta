#include "testPasta.h"

void testType(Pasta* a) {
	std::cout << a->Type()<<std::endl;
}

void testDiscription(Pasta* a) {
	std::cout << a->Discription() << std::endl;
}

void testGetAllParameters(Pasta* a) {
	std::cout << a->GetWidth() << std::endl;
	std::cout << a->GetLength() << std::endl;
	std::cout << a->GetCookingTime() << std::endl;

}