#pragma once
class User
{
public:
	User();
	User(int day, int month, int year);
	~User();
private:
	struct Born {												// � ������� ������ 
		int BornDay;
		int BornMonth;
		int BornYear;
	}a;




};


