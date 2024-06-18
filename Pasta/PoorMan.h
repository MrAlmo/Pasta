#pragma once
#include "Human.h"
#include <thread>
#include <cstdlib>

class PoorMan : public Human {
	bool TOF = true;
public:
	PoorMan(std::string _name, std::string _surname, int _age);

	void To_Cook(Pasta* a);
	void To_Eat(Pasta* a);

	bool GetTOF() const;
	void SetTOF(bool _TOF);
};