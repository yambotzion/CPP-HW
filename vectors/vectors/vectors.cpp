#include <iostream>
#include <string>
using namespace std;

int main() {
    int longNumber[20] = {};
    cout << "Enter a large integer up to 20 digits-- > ";

    string temp; 
    cin >> temp;
    
    if (temp.length() > 20) {
        cout << "Error: Too many digits" << endl;
    }
    else {
        int extra = 0;
        for (int i = temp.length() - 1; i >= 0; i--) {
            char frame = temp.at(i);
            longNumber[20 - extra - 1] = frame - '0';
            extra++;
        }
        cout << "Digits in Array: ";
        for (int i = 0; i < 20; i++) {
            cout << longNumber[i] << " ";
            
        }
        cout << "\nnumDigits: " << extra << endl;
    }
    return 0;
}
