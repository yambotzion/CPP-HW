// vendingmachien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>;
#include <iomanip>;
using namespace std;

int round(int round, int multiple) {
    if (multiple == 0)
        return round;

    int remainder = round % multiple;
    if (remainder == 0)
        return round;

    if (remainder < (multiple / 2 )+ 1)
        return round - remainder;
    else {
        return round + multiple - remainder;
    }
}


int main() {
    int purchaseAmnt;
    int transactions = 0;
    int dollars = 0;
    cout << "Enter number of quarters, dimes, and nickels --> "; 
    int change[3];
    cin >> change[0];
    cin >> change[1];
    cin >> change[2];
    double initialBal = change[0] * .25 + change[1] * .1 + change[2] * .05;
    
    cout << "There are " << change[0] << " quarters, " << change[1] << " dimes, and " << change[2] <<" nickel." << endl;
    cout << fixed << setprecision(2);
    cout << "Initial machine balance is: $" << initialBal << endl;
    cout << "Only one-dollar bill will be accepted." << endl;
    cout << "Only amount between 0 to 100 is accepted." << endl;
    cout << "Enter 0 to stop the program." << endl;

    while (true) {
        int coins[3] = { 0,0,0 };
        int currentBal = change[0] * 25 + change[1] * 10 + change[2] * 5;
        cout << "Enter a purchase amount [0 - 100] --> ";
        cin >> purchaseAmnt;
        if (purchaseAmnt == 0) {
            break;
        }
        cout << "You entered a purchase amount of " << purchaseAmnt << " cents." << endl;
        if (purchaseAmnt > 100 || purchaseAmnt < 0) {
            cout << "You entered an invalid amount (not between 0 and 100). Try again. " << endl << endl;
            continue;
        }
        cout << "Inserting one-dollar bill." << endl;
        cout << "Processing your purchase ... " << endl;
        dollars++;
        purchaseAmnt = round(100 - purchaseAmnt, 5);

        int remaining = purchaseAmnt;

        if (remaining > currentBal) {
            cout << "Insufficient changes!" << endl;
            cout << "Your transaction cannot be processed." << endl;
            cout << "Please take back your dollar bill. " << endl << endl;
            dollars--;
            continue;
        }
        while (coins[0] < change[0] && purchaseAmnt-25 >= 0) {
            purchaseAmnt -= 25;
            coins[0] += 1;

        }
        while (coins[1] < change[1] && purchaseAmnt-10 >= 0) {
            purchaseAmnt -= 10;
            coins[1] += 1;

        }
        while (coins[2] < change[2] && purchaseAmnt-5 >= 0) {
            purchaseAmnt -= 5;
            coins[2] += 1;

        }

        change[0] -= coins[0];
        change[1] -= coins[1];
        change[2] -= coins[2];
        
        cout << "Your change of " << remaining << " cents is given as:" << endl;
        cout << "   quarter(s): " << coins[0] << endl;
        cout << "   dimes(s): " << coins[1] << endl;
        cout << "   nickel(s): " << coins[2] << endl;
        transactions++;
        cout << endl;
    }

    double machineBal = dollars + change[0] * .25 + change[1] * .1 + change[2] * .05;
    cout << "There are " << transactions << " valid transactions." << endl;
    cout << "Machine Balance: " << machineBal  << endl;
    cout << "   dollars(s): " << dollars << endl;
    cout << "   quarter(s): " << change[0] << endl;
    cout << "   dimes(s): " << change[1] << endl;
    cout << "   nickel(s): " << change[2] << endl;
    return 0;

}