#pragma once

class Time {
private:

	int year, month, day;

public:

	Time(int, int, int);

	void SetYear(int);
	void SetMonth(int);
	void SetDay(int);

	int GetYear() const;
	int GetMonth() const;
	int GetDay() const;

	bool CorrectData() const;

	bool operator<(Time);
};
