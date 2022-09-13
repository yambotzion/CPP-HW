#include <iostream>;
using namespace std;

int main() {
    char triangleChar;
    int triangleHeight;

    cout << "Enter a character:" << endl;
    cin >> triangleChar;

    cout << "Enter triangle height:" << endl;
    cin >> triangleHeight;
    cout << endl;

    for (int i = 0; i < triangleHeight; i++) {
        string temp;
        for (int j = 0; j <= i; j++) {
            temp += triangleChar;
            temp += ' ';
        }
        cout << temp << endl;
    }

    return 0;
}