// This console application prompts the user for the number of cookies they want, calculates the required amounts of sugar, butter, and flour based on a base recipe that yields 48 cookies, and then displays the scaled ingredient quantities.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Base recipe yields 48 cookies
    const int   BASE_COOKIES = 48;
    const double SUGAR_CUPS = 1.5;
    const double BUTTER_CUPS = 1.0;
    const double FLOUR_CUPS = 2.75;

    int requestedCookies;
    cout << "How many cookies do you want? ";
    cin >> requestedCookies;

    // Compute scale factor
    double scale = static_cast<double>(requestedCookies) / BASE_COOKIES;

    // Compute ingredients
    double sugarNeeded = SUGAR_CUPS * scale;
    double butterNeeded = BUTTER_CUPS * scale;
    double flourNeeded = FLOUR_CUPS * scale;

    // Output results
    cout << fixed << setprecision(2);
    cout << "\nIngredients needed for " << requestedCookies << " cookies:\n";
    cout << "  Sugar:  " << sugarNeeded << " cups\n";
    cout << "  Butter: " << butterNeeded << " cups\n";
    cout << "  Flour:  " << flourNeeded << " cups\n";

    return 0;
}