#include <iostream>
using namespace std;

int main() {
	//instance variables
	int x1;
	int x2;
	int y1;
	int y2;
	int s1;
	int s2;
	//inputting

	cin >> x1;
	cin >> y1;
	cin >> s1;
	cin >> x2;
	cin >> y2;
	cin >> s2;
	bool marker = false;
	int xVal;
	int yVal;
	for (int i = -10; i <= 10; i++) {
		for (int j = -10; j <= 10; j++) {
			int eq1 = ((x1 * i) + (y1 * j));
			int eq2 = ((x2 * i) + (y2 * j));

			if (eq1 == s1 && eq2 == s2) {
				marker = !marker;
				xVal = i;
				yVal = j;
				break;
			}
		}
	}

	if (marker) {
		cout << "x = " << xVal << ", y = " << yVal << endl;
	}
	else {
		cout << "There is no solution";
	}
	return 0;
}
