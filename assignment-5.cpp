#include <iostream>
#include <cmath>
using namespace std;

double calculateTax(double income);
double roundTax(double tax);
double calculateNetIncome(double income, double tax);
void showResults(double income, double tax, double netIncome);

int main() {
    double income;
    cin >> income;

    double tax = calculateTax(income);
    double roundedTax = roundTax(tax);
    double netIncome = calculateNetIncome(income, roundedTax);

    showResults(income, roundedTax, netIncome);

    return 0;
}

double calculateTax(double income) {
    double tax;

    if (income <= 85528) {
        tax = 0.18 * income - 556.02;
    } else {
        tax = 14839.02 + 0.32 * (income - 85528);
    }

    if (tax < 0) {
        tax = 0;
    }

    return tax;
}

double roundTax(double tax) {
    return round(tax);
}

double calculateNetIncome(double income, double tax) {
    return income - tax;
}

void showResults(double income, double tax, double netIncome) {
    cout << "The tax is: " << tax << " thalers ";
    cout << "Your income after tax is: " << netIncome << " thalers";
}