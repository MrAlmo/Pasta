#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Spaghetti.h"
#include "testPasta.h"
#include "PoorMan.h"
#include "BusinessMan.h"
using namespace std;


int main() {
	srand(time(NULL));
	Spaghetti clua(2, 14, 13);
	PoorMan Bob("Bob", "Ketchup", 12);
	BusinessMan Pablo("Pablo", "Picasso", 43);



	testType(&clua);
	testDiscription(&clua);
	cout << endl;
	testGetAllParameters(&clua);

	cout << endl;
	//Pablo.To_Eat(&clua);
	Bob.To_Eat(&clua);

	return 0;
}