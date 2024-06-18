#include "TestHuman.h"

void testDisplayAllParameters(Human* a) {
	std::cout << a->GetName() << std::endl;
	std::cout << a->GetSurname() << std::endl;
	std::cout << a->GetAge() << std::endl;
}

void testTo_Eat(Human* a, Pasta* b) {
	a->To_Eat(b);
}

void testTo_Cook(PoorMan a, Pasta* b) {
	a.To_Cook(b);
}
void testToCook(BusinessMan a, Pasta* b) {
	a.To_Cook(b);
}

void testHuman(Human* a, Pasta* b) {
	testDisplayAllParameters(a);
	testTo_Eat(a, b);
}

