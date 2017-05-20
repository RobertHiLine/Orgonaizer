#include "stdafx.h"
#include "Person.h"



User::User()
{
	this->a.BornDay = 0;
	this->a.BornMonth = 0;
	this->a.BornYear = 0;

}
User::User(int year, int month, int day) {
	this->a.BornDay = day;
	this->a.BornMonth = month;
	this->a.BornYear = day;
}

User::~User()
{
}
