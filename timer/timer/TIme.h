#pragma once
#include <iostream>
using namespace std;

class Time {
private:
	int hour;
	int minutes;

public:
	//constuctor
	Time();
	Time(int h, int m);
	Time(int h);

	//setters and getters
	void SetHour(int h);
	void SetMinute(int m);
	int GetHour() const;
	int GetMinute() const;

	//functions
	void print() const;
	void advance();
	void advance(int m);
	int minSinceMidnight() const;
	void back();


	bool operator==(const Time& r) const;
	bool operator<(const Time& r) const;

	friend ostream& operator<<(ostream& stream, const Time& r);
};
