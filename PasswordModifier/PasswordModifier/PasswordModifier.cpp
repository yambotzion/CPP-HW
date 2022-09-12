#include <iostream>;
#include <string>;
using namespace std;

char changer(char c) {
    switch (c) {
        case 'i':
            return '1';
            break;
        case 'a':
            return '@';
            break;
        case 'm':
            return 'M';
            break;
        case 'B':
            return '8';
            break;
        case 's':
            return '$';
            break;
        default:
            return c;
            break;

    }
}

int main() {

    string input;
    cin >> input;
    string modified = "";
    for (int i = 0; i < input.length(); i++) {
        char temp = input.at(i);
        modified += changer(temp);

    }

    cout << modified;
    return 0;
}