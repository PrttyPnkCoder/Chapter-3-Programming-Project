// Calculates the interest earned and final account balance based on a principal, annual interest rate, and compounding frequency.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double principal, annualRate;
    int timesCompounded;

    // Gather inputs
    cout << "-- Interest Earned Calculator --\n";
    cout << "Enter principal amount: $";
    cin >> principal;
    cout << "Enter annual interest rate (as decimal, e.g. 0.05): ";
    cin >> annualRate;
    cout << "Enter number of times interest is compounded per year: ";
    cin >> timesCompounded;

    // Compute amount and interest
    double amount = principal * pow(1 + annualRate / timesCompounded, timesCompounded);
    double interest = amount - principal;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nResults:\n";
    cout << "  Principal:               $" << principal << "\n";
    cout << "  Annual interest rate:     " << (annualRate * 100) << "%\n";
    cout << "  Times compounded/year:    " << timesCompounded << "\n";
    cout << "  Interest earned:         $" << interest << "\n";
    cout << "  Ending balance:          $" << amount << "\n";

    return 0;
}