#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* Define your functions here. */
void PrintMenu() {
	cout << "\nMENU" << endl;
	cout << "c - Number of non-whitespace characters" << endl;
	cout << "w - Number of words" << endl;
	cout << "f - Find text" << endl;
	cout << "r - Replace all !'s" << endl;
	cout << "s - Shorten spaces" << endl;
	cout << "q - Quit" << endl;
}
int GetNumOfNonWSCharacters(const string text){
	int characters = 0;
	for (int i = 0; i < text.length(); i++) {
		if (text.at(i) != ' ') {
			characters++;
		}
	}

	return characters;
}

int GetNumOfWords(const string text) {
	string word = "";
	vector<string> temp;
	
	for (int i = 0; i < text.length(); i++){
		if (text.at(i) == ' ') {
			temp.push_back(word);
			word = "";
		}
		else {
			word = word + text.at(i);
		}
	}

	temp.erase(remove(temp.begin(), temp.end(), ""), temp.end());
	int words = temp.size() + 1;
	return words;
}
int FindText(string wordToBeFound, string text) {
	int instances = 0;
	string word = "";
	for (int i = 0; i < text.length(); i++) {
		if (text.at(i) == ' ') {
			if (word.compare(wordToBeFound) == 0) {
				instances++;
			}
			word = "";

		}
		else {
			word = word + text.at(i);
		}
	}
	return instances;

}
void ExecuteMenu(char choice, string text) {
	switch (choice) {
		
		case 'c':
			cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(text) << endl;
			break;
		case 'w':
			cout << "Number of words: " << GetNumOfWords(text) << endl;
			break;
		case 'f':
			string wordToBeFound;
			cout << "Enter a word or phrase to be found:" << endl;
				cin.ignore();
				cin >> wordToBeFound;
			cout << "\"" << wordToBeFound << "\" instances: " << FindText(wordToBeFound,text) << endl;
			break;
	}
}


int main() {
	string text;

	/* Type your code here. */
	cout << "Enter a sample text:" << endl;
	getline(cin,text);
	char choice = ' ';
	cout << "\nYou entered: " << text << endl;
	while (choice != 'q') {
		PrintMenu();
		cout << "\nChoose an option:" << endl;

		cin >> choice;
		if (choice == 'c' ||
			choice == 'w' ||
			choice == 'f' ||
			choice == 'r' ||
			choice == 's' ||
			choice == 'q') {
			ExecuteMenu(choice, text);


		}
		
	}

	return 0;
}