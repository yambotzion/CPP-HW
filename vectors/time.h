#ifndef TIME_H_
#define TIME_H_

class Time {
	private:
		int hour;
		int minutes;

	public: 
		Time();
		TIme(int h, int m);
		void SetHour(int h);
		void SetMinute(int m);
		int GetHour() const;
		int GetMinute() const;
		void print() const;
		void advance();
};
