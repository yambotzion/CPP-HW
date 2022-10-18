#include <iostream>
#include "TIme.h"

using namespace std;

int main() {
	Time t1;   // hour:  0, minute:  0, AM/PM format: 12:00 AM 
	Time t2(8);   // hour:  8, minute:  0, AM/PM format:  8:00 AM 
	Time t3(13, 30);  // hour: 13, minute: 30, AM/PM format:  1:30 PM 
	Time t4(25, 5);  // hour:  0, minute:  5, AM/PM format: 12:05 AM 
	Time t5(12, 60);  // hour: 12, minute:  0, AM/PM format: 12:00 PM 

	Time times[5] = { t1,t2,t3,t4,t5 };

	for (int i = 0; i < 5; i++) {
		times[i].print();
	}
}