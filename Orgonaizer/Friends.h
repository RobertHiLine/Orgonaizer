#pragma once
class Friends
{
public:
	Friends();
	~Friends();
	void  AddFriend();
	void Print();
	void DeleteFriend();
	static int i;
private:
	struct FriendInformation {
		char *name;
		char *surname;
		struct Born {
			int BornDay;
			int BornMonth;
			int BornYear;
		}born;
		int *phonenumber;
		struct adress {
			char *street;
			char *country;
			char *city;
		}adress;
	}inf;
	
};

