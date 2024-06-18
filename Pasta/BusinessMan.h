#pragma once
#include <thread>
#include "Human.h"

class BusinessMan : public Human {

public:
	BusinessMan(std::string _name, std::string _surname, int _age);

	void To_Cook(Pasta* a);
	void To_Eat(Pasta* a);
};