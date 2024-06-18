#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Spaghetti.h"
#include "Lasagna.h"
#include "Pappardelle.h"
#include "Penne.h"
#include "Ravioli.h"
#include "Tortellini.h"
#include "PoorMan.h"
#include "BusinessMan.h"
#include "testPasta.h"
#include "TestHuman.h"
using namespace std;


int main() {
	srand(time(NULL));
	
	Spaghetti Spaghetti_(2, 14, 8);
	Lasagna Lasagna_(3, 7, 30);
	Pappardelle Pappardelle_(4, 5, 15);
	Penne Penne_(7, 2, 13);
	Ravioli Ravioli_(8, 5, 25);
	Tortellini Tordellini_(7, 5, 20);

	PoorMan Bob("Bob", "Ketchup", 12);
	BusinessMan Pablo("Pablo", "Picasso", 43);

	testPasta(&Spaghetti_);
	testPasta(&Lasagna_);
	testPasta(&Pappardelle_);
	testPasta(&Penne_);
	testPasta(&Ravioli_);
	testPasta(&Tordellini_);
	
	std::cout << "------------------------------------------" << std::endl;

	testHuman(&Bob, &Pappardelle_);
	testHuman(&Pablo, &Pappardelle_);
	testHuman(&Bob, &Spaghetti_);
	testHuman(&Pablo, &Spaghetti_);
	testHuman(&Bob, &Lasagna_);
	testHuman(&Pablo, &Lasagna_);
	testHuman(&Bob, &Penne_);
	testHuman(&Pablo, &Penne_);
	testHuman(&Bob, &Ravioli_);
	testHuman(&Pablo, &Ravioli_);
	testHuman(&Bob, &Tordellini_);
	testHuman(&Pablo, &Tordellini_);

	std::cout << "------------------------------------------" << std::endl;

	testToCook(Bob, &Pappardelle_);
	testToCook(Pablo, &Pappardelle_);
	testToCook(Bob, &Spaghetti_);
	testToCook(Pablo, &Spaghetti_);
	testToCook(Bob, &Lasagna_);
	testToCook(Pablo, &Lasagna_);
	testToCook(Bob, &Penne_);
	testToCook(Pablo, &Penne_);
	testToCook(Bob, &Ravioli_);
	testToCook(Pablo, &Ravioli_);
	testToCook(Bob, &Tordellini_);
	testToCook(Pablo, &Tordellini_);

	return 0;
}