#include <iostream>
#include <string>
using namespace std;

int main() {
	unsigned int groupSize;
	string finalOutput;

	cout << "Enter the number of group members (Maximum 5): " << endl;
	cin >> groupSize;

	switch (groupSize) {
	case 0:
		finalOutput = "This group is empty";
		break;
	case 1:
		finalOutput = "This isn't a group. It's an individual";
		break;
	case 2:
		finalOutput = "This is a duo";
		break;
	case 3:
		finalOutput = "This is a small group";
		break;
	case 4:
		finalOutput = "This is a moderately sized group";
		break;
	case 5:
		finalOutput = "This is the largest group";
		break;
	default:
		finalOutput = "You've entered an invalid number";
		break;
	}

	/*if (groupSize == 0) {
		finalOutput = "This group is empty";
	}
	else if (groupSize == 1) {
		finalOutput = "This isn't a group. It's an individual";
	}
	else if (groupSize == 2) {
		finalOutput = "This is a duo";
	}
	else if (groupSize == 3) {
		finalOutput = "This is a small group";
	}
	else if (groupSize == 4) {
		finalOutput = "This is a reasonably sized group";
	}
	else if (groupSize == 5) {
		finalOutput = "This is the largest group possible";
	}
	else {
		finalOutput = "You entered an invalid group size";
	}*/

	cout << finalOutput << endl << endl;

	return 0;
}
