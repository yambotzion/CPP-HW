#include "TIme.h"
#include <iostream>
#include <string>
using namespace std;
Time::Time() {
	hour = 0;
	minutes = 0;
}

Time::Time(int h, int m) {
	if (h < 23 && h >= 0) {
		hour = h;
	}
	else {
		hour = 0;
	}
	if (m < 60 && m >= 0) {
		minutes = m;
	}
	else {
		minutes = 0;
	}
}

Time::Time(int h) {
	if (h < 23 && h >= 0) {
		hour = h;
	}
	else {
		hour = 0;
	}
	minutes = 0;
}
void Time::SetHour(int h) {
	if (h < 23 && h >= 0) {
		hour = h;
	}
}

void Time::SetMinute(int m) {
	if (m < 60 && m >= 0) {
		minutes = m;
	}
}

int Time::GetHour() const {
	return hour;
}

int Time::GetMinute() const{
	return minutes;
}

void Time::print() const {
	int tempHour = hour;
	int tempMinute = minutes;

	string printed = "";
	bool isPM = true;

	if (tempHour == 0) {
		isPM = false;
		printed += "12";
	}
	else if (tempHour <= 12) {
		isPM = false;
		printed += to_string(tempHour);
	}
	else{
		
		tempHour -= 12;
		printed += to_string(tempHour);
	}
	printed += ":";

	if (tempMinute < 10) {
		printed += "0" + to_string(tempMinute);
	}
	else {
		printed += to_string(tempMinute);
	}

	if (isPM) {
		printed += " PM";
	}
	else {
		printed += " AM";
	}
	
	cout << printed << endl;
}

void Time::advance() {
	minutes += 1;

	if(minutes == 60){
		hour += 1;
		minutes = 0;
	}
	if (hour > 23) {
		hour = 0;
	}
}