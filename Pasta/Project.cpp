#include <iostream>
#include "Spaghetti.h"
#include "testPasta.h"
using namespace std;


int main() {
	Spaghetti clua(2, 14, 13);

	testType(&clua);
	testDiscription(&clua);
	cout << endl;
	testGetAllParameters(&clua);

	return 0;
}