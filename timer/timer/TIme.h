#pragma once
class Time {
private:
	int hour;
	int minutes;

public:
	Time();
	Time(int h, int m);
	Time(int h);
	void SetHour(int h);
	void SetMinute(int m);
	int GetHour() const;
	int GetMinute() const;
	void print() const;
	void advance();
};