#include <iostream>
#include "Spaghetti.h"
#include "testSpaghetti.h"
using namespace std;


int main() {
	Spaghetti clua(2, 14, 13);

	testTypeSpaghetti(clua);
	testDiscriptionSpaghetti(clua);
	cout << endl;
	testGetAllParametersSpaghetti(clua);

	return 0;
}