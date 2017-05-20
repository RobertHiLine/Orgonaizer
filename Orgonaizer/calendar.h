#pragma once
class Calendar
{
	static int month[12];
public:
	Calendar();
	Calendar(int day, int month, int year);
	~Calendar();
	int IfCurrentHolyday();
	void AddHolyday(int day, int month, int year);
	int TestData(int, int, int);
	int IfHolyday(int day, int month, int year);
	int IsLeapYear(int);
	void PrintBasicHolyday();
private:
	
	struct Date {
		int day;
		int month;
		int year;
	}CurrentDate;
	struct Holyday {
		int day;
		int month;
		int year;


	}BasicHolyday[20], MyHolyday[300];

};

