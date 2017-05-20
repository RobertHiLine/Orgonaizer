#pragma once
class User
{
public:
	User();
	User(int day, int month, int year);
	~User();
private:
	struct Born {												// В будущем удалим 
		int BornDay;
		int BornMonth;
		int BornYear;
	}a;




};


