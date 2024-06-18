#include "PoorMan.h"



PoorMan::PoorMan(std::string _name, std::string _surname, int _age):
	Human(_name, _surname, _age)
{}

void PoorMan::To_Eat(Pasta* a) {
	To_Eat(a);
	std::cout << "Sits down on the floor and clumsily begins to eat." << std::endl;
	for (int i = 3; i > 0; i--) {
		std::cout << i << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
	int rand_num = rand() % 2;
	if (rand_num == 1) {
		std::cout << "Done!"<<std::endl;
	}
	else {
		std::cout << "Failed!" << std::endl;
		std::cout << "All the paste fell on the floor." << std::endl;
	}
}

void PoorMan::To_Cook(Pasta* a) {
	bool TOF = true;
	std::cout << "Take " << a->Type();
	std::this_thread::sleep_for(std::chrono::seconds(1));
	if (a->Type() == "Lasagna") {
		std::cout << " then understood that he doesen't have an Oven "<< std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "Failed";
		TOF = false;
	}
	else {
		std::cout << " then put the " << a->Type() << " in a very strange and rusty pot of boiling water." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "Wait " << a->GetCookingTime() << " minutes." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		int rand_num = rand() % 3;
		if (rand_num == 1 || rand_num == 2)
		{
			std::cout << "Well Done!" << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
		else 
		{
			std::cout << "Failed!"<<std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			TOF = false;
		}
		
	}
}