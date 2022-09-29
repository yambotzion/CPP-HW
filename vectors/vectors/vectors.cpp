#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> strToLongNumber(string num) {
    vector<int> vec(20, 0);
    int extra = 0;
    for (int i = num.length() - 1; i >= 0; i--) {
        char frame = num.at(i);
        vec.at(20 - extra - 1) = frame - '0';
        extra++;
    }

    return vec;
}

vector<int> add(vector<int> one, vector<int> two) {

    vector<int> tempVec;
    
    for (int i = 0; i < one.size(); i++) {
        tempVec.push_back(one.at(i) + two.at(i));
    }

    for (int i = tempVec.size()-1; i > 0  ; i--) {
        if (tempVec.at(i) >= 10) {
            tempVec.at(i) -= 10;
            tempVec.at(i - 1) += 1;
            
        }

    } 
    
    return tempVec;
  
}

void printLongNumber(vector<int> one) {
    bool print = false;
    for (auto x : one) {
        if (x != 0 && print == false)
            print = true;
        if (print) {
            cout << x;
        }
    }     
}
int main() {
    
   
   cout << "Enter an expression --> ";

   string temp; 
   getline(cin,temp);
  
   int whiteSpaceIndex = temp.find(' ');
   if (whiteSpaceIndex > 19) {
       cout << temp << " = overflow" << endl;
   }

   else if (temp.substr(0, whiteSpaceIndex).length() > 20 || temp.substr(whiteSpaceIndex + 3, temp.length()).length() > 20) {
       cout << "Invalid operand(s)" << endl;
   }
   else {
       vector<int> longNumber = strToLongNumber(temp.substr(0, whiteSpaceIndex));
       vector<int> longNumberTwo = strToLongNumber(temp.substr(whiteSpaceIndex + 3, temp.length() - 1));
       vector<int> longNumberAdded = add(longNumber, longNumberTwo);
        
       cout << temp << " = ";
       printLongNumber(longNumberAdded);
       cout << endl;
   }
  
   
   

   

    return 0;
}
