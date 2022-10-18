#include <iostream>
#include "TIme.h"

using namespace std;

int main() {
    Time t6(0, 0);   // hour: 0, minute: 0,  12:00 AM 


    // Print times (add code to label time and new line as needed 
    t6.print();   // 12:00 AM 

    t6.advance(120);  // hour: 2, minute: 0 
    t6.back();   // hour: 1, minute: 59 
    cout << “minutes since midnight : “ << t6.minSinceMidnight() << endl; // 119 
    t6.advance();    // hour: 2, minute: 0 
    t6.advance(1320);  // hour: 0, minute: 0 
    t6.back();   // hour: 23, minute: 59 

    // Print times (add code to label time and new line as needed 
    t6.print();   // 11:59 PM 

    // assume t1 (hour: 0, minute: 0) and t2 (hour: 0, minute: 0) 
    if (t1 == t2)
        cout << “t1 is the same as t2” << endl;
    else
        cout << “t1 is not the same as t2” << endl;
    // should output: t1 is the same as t2 

}