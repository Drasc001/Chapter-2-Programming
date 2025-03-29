#include <iostream>

using namespace std;

int main() {
    // Variables following the naming convention from pseudocode
    int surveyed = 16500;
    double PEdrinks = surveyed * 0.15;
    double PreferCitrus = PEdrinks * 0.58;

    // Display output
    cout << "Out of 16,500 customers approximately "
        << PEdrinks << " purchased one or more energy drinks per week." << endl;
    cout << "Out of " << PEdrinks << " customers approximately "
        << PreferCitrus << " preferred citrus-flavored energy drinks." << endl;

    return 0;
}