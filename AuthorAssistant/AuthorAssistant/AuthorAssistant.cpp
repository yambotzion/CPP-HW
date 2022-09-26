	#include <iostream>
	#include <string>
	using namespace std;

	/* Define your functions here. */
	void PrintMenu() {
		cout << "MENU" << endl;
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
		int words = 0;
		string word = "";
		string temp[99];
		int arrayIndex = 0;
		for (int i = 0; i < text.length(); i++){
			if (text.at(i) == ' ') {
				temp[arrayIndex] = word;
				word = "";
				arrayIndex++;
			}
			else {
				word = word + text.at(i);
			}
		}

		for (int i = 0; i <= arrayIndex; i++) {
			if (temp[i].compare("") != 0) {
				words++;
			}
		}

	
		return words+1;
	}
	int FindText(string wordToBeFound, string text) {
		int instances = 0;
		int index = 0;
		while ((index = text.find(wordToBeFound, index)) != std::string::npos) {
			instances++;
			index += wordToBeFound.length();
		}
		return instances;

	}
	void ReplaceExclamation(string& text) {
		for (int i = 0; i < text.length(); i++) {
			if (text.at(i) == '!') {
				text.replace(i, 1, ".");
			}
		}
	}

	void ShortenSpace(string& text) {
		for (int i = 0; i < text.length()-1; i++) {
			if (text.at(i) == ' ') {
				int amountOfSpaces = 1;
				for (int j = i+1; j < text.length() - 1; j++) {
					if (text.at(j) == ' ') {
						amountOfSpaces++;
						continue;
					}
					else {
						break;
					}
				}
				text.replace(i, amountOfSpaces, " ");
			}
		}
	}
	void ExecuteMenu(char choice, string& text) {
	
		switch (choice) {
		
			case 'c':
				cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(text) << endl;
				break;
			case 'w':
				cout << "Number of words: " << GetNumOfWords(text) << endl;
				break;
			case 'f': {
				string wordToBeFound;
				cout << "Enter a word or phrase to be found:" << endl;
				cin.ignore();
				getline(cin, wordToBeFound);
				cout << "\"" << wordToBeFound << "\" instances: " << FindText(wordToBeFound, text) << endl;
				break;
			}
			case 'r':
				ReplaceExclamation(text);
				cout << "Edited text: " << text << endl;
				break;
			case 's':
				ShortenSpace(text);
				cout << "Edited text: " << text << endl;
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
			cout << endl;
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