#include "Human.h"

Human::Human(std::string _name, std::string _surname, int _age) :
	name(_name),
	surname(_surname),
	age(_age)
{}
	
std::string Human::GetName() const{
	return name;
}
std::string Human::GetSurname() const {
	return surname;
}
int Human::GetAge() const {
	return age;
}

void Human::SetName(std::string _name) {
	name = _name;
}
void Human::SetSurname(std::string _surname) {
	surname = _surname;
}
void Human::SetAge(int _age) {
	age = age;
}



Human::Human(const Human& other):
	name(other.name),
	surname(other.surname),
	age(other.age)
{}