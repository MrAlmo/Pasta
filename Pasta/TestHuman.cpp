#include "TestHuman.h"

void testDisplayAllParameters(Human* a) {
	std::cout << a->GetName() << std::endl;
	std::cout << a->GetSurname() << std::endl;
	std::cout << a->GetAge() << std::endl;
}

void testTo_Eat(Human* a, Pasta* b) {
	a->To_Eat(b);
}

void testToCook(PoorMan a, Pasta* b) {
	a.To_Cook(b);
	std::cout << "TOF = " << a.GetTOF() << std::endl;
}
void testToCook(BusinessMan a, Pasta* b) {
	a.To_Cook(b);
}

void testHuman(Human* a, Pasta* b) {
	testDisplayAllParameters(a);
	std::cout << std::endl;
	testTo_Eat(a, b);
	std::cout << std::endl;
}

