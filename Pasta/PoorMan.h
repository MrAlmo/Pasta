#pragma once
#include "Human.h"

class PoorMan : public Human {

public:
	PoorMan(std::string _name, std::string _surname, int _age);

	void To_Eat();
};