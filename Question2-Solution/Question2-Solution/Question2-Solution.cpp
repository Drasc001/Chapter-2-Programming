#include <iostream>
#include <iomanip>  // For formatting output

using namespace std;

int main() {
    // Constants
    const double TANK_SIZE = 20.0;
    const double MPG_TOWN = 23.5;
    const double MPG_HIGHWAY = 28.9;

    // Calculating distances
    double distanceInTown = TANK_SIZE * MPG_TOWN;
    double distanceOnHighway = TANK_SIZE * MPG_HIGHWAY;

    // Displaying results with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "The distance you can drive in town with a 20-gallon gas tank is "
        << distanceInTown << " miles." << endl;
    cout << "The distance you can drive on the highway with a 20-gallon gas tank is "
        << distanceOnHighway << " miles." << endl;

    return 0;
}