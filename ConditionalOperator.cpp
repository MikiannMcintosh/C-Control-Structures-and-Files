#include <iostream>
#include <string>
using namespace std;

int main() {
	int testNumber;
	int finalOutput;
	cout << "Enter a random number: " << endl;
	cin >> testNumber;

	// If Number is less than 100, output this is a small number, else output this is a 
	// big number

	finalOutput = testNumber < 100 ? 3*5 : 10*20;

	/*if (testNumber < 100) {
	finalOutput = "This is a small number";
	}
	else {
	finalOutput = "This is a large number";
	}*/

	cout << finalOutput << endl;

	return 0;
}
