// James Aaron
// July 4,2021

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a_quarters, a_dimes, a_nickels, a_pennies;
    cin >> a_quarters;  // input of quarters
    cin >> a_dimes;     // input of dimes
    cin >> a_nickels;   // input of nickels
    cin >> a_pennies;   // input of pennies
    
    cout << "Test data: " << a_quarters << " quarters, " << a_dimes << " dimes, ";
    cout << a_nickels << " nickels, and " << a_pennies << " pennies." << endl;
    
    return 0;
}
// @jaaaron42

// Coin Counter
/*
 3
 0
 5
 23
 Test data: 3 quarters, 0 dimes, 5 nickels, and 23 pennies.
 Program ended with exit code: 0
 */
