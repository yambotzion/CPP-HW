#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int input;
    int totalNumbers = 0;
    int max = -9999999;
    double avg = 0;

    cin >> input;
    while (input >= 0) {
        if (max < input) {
            max = input;
        }
        totalNumbers++;
        avg += input;
        cin >> input;
    }


    cout << fixed << setprecision(2);
    cout << max << " " << avg / totalNumbers << endl;
    return 0;
}
