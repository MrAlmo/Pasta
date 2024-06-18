#pragma once
#include <iostream>
#include <string>

class Human {
protected:
	std::string name;
	std::string surname;
	int age;

	explicit Human(std::string _name, std::string _surname, int _age);
public:
	virtual ~Human() = default;

	virtual void To_Eat() = 0;

	std::string GetName() const;
	std::string GetSurname() const;
	int GetAge() const;

	void SetName(std::string _name);
	void SetSurname(std::string _surname);
	void SetAge(int _age);


	Human(const Human& other);
	Human& operator=(const Human&) = delete;
};