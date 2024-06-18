#include "BusinessMan.h"

BusinessMan::BusinessMan(std::string _name, std::string _surname, int _age):
	Human(_name, _surname, _age)
{}

void BusinessMan::To_Eat(Pasta* a) {
	To_Cook(a);
	std::cout << "Sits down at the table and elegantly begins to eat." << std::endl;
	for (int i = 3; i > 0; i--) {
		std::cout << i << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	std::cout << "Done!";
}

void BusinessMan::To_Cook(Pasta* a) {
	std::cout<< name << " Take "<<a->Type(); 
	std::this_thread::sleep_for(std::chrono::seconds(1));
	if (a->Type() == "Lasagna") {
		std::cout << " then opened the oven and put the " << a->Type() << " in there." << std::endl;
	}
	else
		std::cout << " then put the " << a->Type() << " in a pot of boiling water." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "Wait " << a->GetCookingTime() << " minutes."<<std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "Well Done!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
}