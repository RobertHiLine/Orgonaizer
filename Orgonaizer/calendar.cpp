#include "stdafx.h"
#include "calendar.h"
#include <ctime>
#include <iostream>
using namespace std;
Calendar::Calendar()
{
	this->CurrentDate.day = 0;
	this->CurrentDate.month = 0;
	this->CurrentDate.year = 0;

}

Calendar::Calendar(int day, int month, int year) {
	int i = 0;
	this->CurrentDate.day = day;
	this->CurrentDate.month = month;
	this->CurrentDate.year = year;
	this->BasicHolyday[1].day = 1; // New Year
	this->BasicHolyday[1].month = 1;
	this->BasicHolyday[2].day = 8;// Women's day
	this->BasicHolyday[2].month = 3;
	this->BasicHolyday[3].day = 9;// Dimon's Birthday
	this->BasicHolyday[3].month = 6;
	for (i = 0; i < 300; i++) {
		this->MyHolyday[i].day = 0;
		this->MyHolyday[i].month = 0;
	}
}

int Calendar::IfCurrentHolyday()
{
	for (int i = 0; i < 20; i++)
		if (this->CurrentDate.day == this->BasicHolyday[i].day&&this->CurrentDate.month == this->BasicHolyday[i].month)

			return i;
	
	for (int i = 0; i < 300; i++) {
		if (this->CurrentDate.day == this->MyHolyday[i].day&&this->CurrentDate.month == this->MyHolyday[i].month&&this->CurrentDate.year == this->MyHolyday[i].year)
			
				return i + 20;
		}
		 return  0;
}
int Calendar::IfHolyday(int day,int month,int year)
{
	
	for (int i = 0; i < 20; i++)
		if (day == this->BasicHolyday[i].day&& month == this->BasicHolyday[i].month)

			return i;

	for (int i = 0; i < 300; i++) {
		if (day == this->MyHolyday[i].day&&month == this->MyHolyday[i].month&&year == this->MyHolyday[i].year)

			return i + 20;
	}
	return  0;
}
void Calendar::AddHolyday(int day, int month, int year) {
	static int i = 0;
	if (this->TestData(day, month, year)){
		if (i < 300) {
			this->MyHolyday[i].day = day;
			this->MyHolyday[i].month = month;
			this->MyHolyday[i].year = year;
			i++;
		}
		else cout << "Error";
	}
}
 int Calendar::TestData(int day, int month, int year) {
	if (month < 13 && month>0)
		if ((this->month[month - 1] + ((month == 2) && IsLeapYear(year))) >= day&& day > 0)
			if (year > 0)
				return 1;

}
int Calendar::IsLeapYear(int year) {
	if (year % 4 == 0)
		return 1;
	else
		return 0;
}
void Calendar::PrintBasicHolyday()
{
	switch (this->IfCurrentHolyday())
	{

	case 1: 
		cout << "New Year\n";
		break;
	case 2:
		cout << "New Year\n";
		break;
	case 3:
		cout << "New Year\n";
		break;
	case 4:
		cout << "New Year\n";
		break;
	case 5:
		cout << "New Year\n";
		break;
	case 6:
		cout << "New Year\n";
		break;
	case 7:
		cout << "New Year\n";
		break;
	case 8:
		cout << "New Year\n";
		break;
	case 9:
		cout << "New Year\n";
		break;
	case 10:
		cout << "New Year\n";
		break;
	case 11:
		cout << "New Year\n";
		break;
	case 12:
		
		break;
	case 13:
		break;
	case 14:
		break;
	case 15:
		break;
	case 16:
		break;
	case 17:
		break;
	case 18:
		break;
	case 19:
		break;
	case 20:
		break;











	}


}

Calendar::~Calendar()
{
}