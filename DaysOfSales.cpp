#include <iostream>
using namespace std;

int main() {
	unsigned int numOfDays;
	double total = 0.0;

	cout << "How many days of sales would you like to enter? ";
	cin >> numOfDays;

	for (int counter = 0; counter < numOfDays; counter++) {
		double sales;
		cout << "What was your sales figure for Day " << counter + 1 << "?" << endl;
		cin >> sales;
		total += sales;
	}

	cout << "Your total sales for " << numOfDays << " days was $" << total << endl;


	/*cout << "How many numbers would you like to see? ";
	cin >> userSelection;

	for (x = 0; x < userSelection; x++) {
		cout << x + 1 << " ";
	}*/

	/*do {
		cout << "Hello" << endl;
		x++;
	} while (x < 5);*/

	return 0;
}
