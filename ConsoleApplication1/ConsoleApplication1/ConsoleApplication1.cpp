#include <iostream>
using namespace std;
int main() {

	double riserate = 1.5;
	// Setting rise rate to 1.5 as a constant for calculations

	double risein5years = riserate * 5;
	// Calculates the rise of the ocean in 5 years using multiplication

	double risein7years = riserate * 7;
	//Calculates the rise of the ocean in 7 years using multiplication

	double risein10years = riserate * 10;
	//Calculates the rise of the ocean in 10 years using multiplication

	cout << "In 5 years the ocean rise will be " << risein5years << " milimeters.\n";

	cout << "In 7 years the ocean rise will be " << risein7years << " milimeters.\n";

	cout << "In 10 years the ocean rise will be " << risein10years << " milimeters.\n";

}

