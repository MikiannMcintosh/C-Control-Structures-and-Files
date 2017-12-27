#include <iostream>
using namespace std;

int main() {
	unsigned int numOfYears;
	double totalRainfall = 0.0;
	double averageRainfall;
	double averageYearlyRainfall;
	unsigned int numOfMonths;

	cout << "How many years of rainfall would you like to enter? ";
	cin >> numOfYears;

	for (unsigned int x = 0; x < numOfYears; x++) {
		
		for (int y = 0; y < 12; y++) {
			double monthRainfall;
			cout << "Please enter rainfall of Year No. " << x + 1 << " Month No. " << y + 1 << endl;
			cin >> monthRainfall;
			totalRainfall += monthRainfall;
		}
	}

	averageRainfall = totalRainfall / (12 * numOfYears);
	numOfMonths = 12 * numOfYears;

	cout << "Total Rainfall: " << totalRainfall << endl;
	cout << "Average Monthly Rainfall: " << averageRainfall << endl;
	cout << "Total Number of Months: " << numOfMonths << endl;

	return 0;
}
