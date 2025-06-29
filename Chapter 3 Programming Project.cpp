// Presents a simple addition problem with two random numbers and shows the answer when Enter is pressed.
#include <iostream>
#include <cstdlib>      // for rand(), srand()
#include <ctime>        // for time()
#include <limits>      // for numeric_limits

using namespace std;

int main() {
    // Seed the random-number generator
    srand(static_cast<unsigned>(time(nullptr)));

    // Generate two random numbers from 1 to 1000
    int a = rand() % 1000 + 1;
    int b = rand() % 1000 + 1;

    // Present the problem
    cout << "-- Math Tutor --\n";
    cout << "Solve: " << a << " + " << b << " = ?\n";
    cout << "(Press Enter when ready to see the answer)";

    // Wait for the user to press Enter
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    // Show the solution
    cout << "Answer: " << (a + b) << "\n";

    return 0;
}