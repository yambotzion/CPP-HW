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

void Time::advance(int m) {
	if (m > 0) {
		minutes += m;

		if (minutes >= 60) {
			hour += m/60;
			minutes -= m;
		}
		if (hour > 23) {
			hour = 0;
		}
	}
}

void Time::back() {
	minutes -= 1;

	if (minutes < 0) {
		hour -= 1;
		minutes = 59;
	}
	if (hour < 0) {
		hour = 23;
	}
}
int Time::minSinceMidnight() const {
	return hour * 60 + minutes;

}


bool Time::operator==(const Time& r) const {
	return this->minutes == r.GetMinute() && this->hour == r.GetHour();
}

bool Time::operator<(const Time& r) const {
	return this->hour <= r.GetHour() && (this->hour == r.GetHour() && this->minutes < r.GetMinute());
}

ostream& operator<<(ostream &stream, const Time &r){
	int tempHour = r.GetHour();
	int tempMinute = r.GetMinute();
	stream << to_string(tempHour);

	stream << ":";

	if (tempMinute < 10) {
		stream << "0" + to_string(tempMinute);
	}
	else {
		stream << to_string(tempMinute);
	}

	return stream;
}


