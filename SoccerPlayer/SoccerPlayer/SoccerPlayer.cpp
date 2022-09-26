#include <iostream>
// FIXME include vector library
#include <vector>
using namespace std;

int main() {

	vector<int> jerseys;
	vector<int> ratings;

	for (int i = 0; i < 5; i++) {
		cout << "Enter player " << (i+1) << "'s jersey number: " << endl;
		int tempJerseys;
		cin >> tempJerseys;
		jerseys.push_back(tempJerseys);

		cout << "Enter player " << (i + 1) << "'s rating: " << endl;
		int tempRating;
		cin >> tempRating;
		ratings.push_back(tempRating);
		cout << endl;
	}
	cout << "ROSTER" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Player " << i + 1 << " -- Jersey number: " << jerseys.at(i) << ", Rating: " << ratings.at(i) << endl;
	}
	
	char decision = ' ';
	while (decision != 'q'){
		cout << "\nMENU" << endl;
		cout << "a - Add player" << endl;
		cout << "d - Remove player" << endl;
		cout << "u - Update player rating" << endl;
		cout << "r - Output players above a rating" << endl;
		cout << "o - Output roster" << endl;
		cout << "q - Quit" << endl;
		cout << "\nChoose an option: " << endl;
		cin >> decision;

		switch (decision) {
			case 'a':
				for (int i = 0; i < jerseys.size(); i++) {
					cout << "Player " << i + 1 << " -- Jersey number: " << jerseys.at(i) << ", Rating: " << ratings.at(i) << endl;
				}
				break;
			case 'd':
				cout << "Enter a new player's jersey number: " << endl;
				int tempJerseys;
				cin >> tempJerseys;
				jerseys.push_back(tempJerseys);

				cout << "Enter the new player's rating: " << endl;
				int tempRating;
				cin >> tempRating;
				ratings.push_back(tempRating);
				cout << endl;
			case 'u':
				cout << "Enter a jersey number: " << endl;
				int tempJerseys;
				cin >> tempJerseys;
				
				int tempIndex;
				for (int i = 0; i < jerseys.size(); i++) {
					if (jerseys.at(i) == )
				}

		}
	}
	
	return 0;
}