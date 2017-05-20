#include "stdafx.h"
#include "Friends.h"
#include "calendar.h"
#include "Person.h"
#include "Note.h"
#include <iostream>
#include <ctime>
int  Friends::i = 0;
int Calendar:: month[] = { 31,28,31,30,31,30,31,30,31,30,31 };
using namespace std;
int main()
{
	struct tm *currentime;
	time_t lt;
	lt = time('\0');
	currentime = localtime(&lt);
	Friends friends[100];
	User user;
	Calendar calendar(currentime->tm_mday,currentime->tm_mon,currentime->tm_year);
	Note note;
	int choose, day, month, year;
	for(;;){
	cout << "\tWelcome current date: "<<currentime->tm_mday<< "/" << currentime->tm_mon << "/" << currentime->tm_year+1900 << "\t" <<currentime->tm_hour << ":" <<currentime->tm_min   << "\n 1.Choose day\n 2.Friends\n 3.Notes\n 4.Holyday\n 5.Exit";
	cin >> choose;
	system("cls");
	switch (choose) {
	case 1:
		cout << "Set the date to search(day/month/year)\n";
		cin >> day >> month >> year;
		cout << "1.Notes in this day\n2.Show holidays\n";
		cin >> choose;
		system("cls");
		switch (choose) {
		case 1:
			cout << "1.Add notes\n2.Delete notes";
			cin >> choose;
			system("cls");
			switch (choose)
			{
			case 1:																									
				note.AddNote();									//													
				break;											//MENU												
			case 2:												//
				break;
			default:
				cout << "Wrong choose";
				break;
			}
			break;
		case 2:
			cout << "1.Show holiday\n2.Add holiday\n3.Delete holiday";
			cin >> choose;
			system("cls");
			switch (choose)
			{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			default:
				break;
			}
			break;
		default:
			cout << "Wrong choose";
			break;
		}
		break;
	case 2:
		while (choose != 4)
		{
		cout << "1.Show friends\n2.Add friend\n3.Delete friend\n4.Menu\n";
		cin >> choose;
		system("cls");
		


			switch (choose)
			{
				{
			case 1:
				if (Friends::i) {
					for (int s = 0; s < Friends::i; s++)
						friends[s].Print();
				}
				else cout << "List is empty\n";
				system("pause");
				system("cls");
				break;
			case 2:
				
					friends[Friends::i].AddFriend();
					getchar();
				
				break;
			case 3:if (Friends::i)
				Friends::i--;
				//friends[Friends::i].DeleteFriend();
				   else cout << "List is empty\n";
				   system("pause");
				   system("cls");
				break;
			default:
				cout << "Wrong choose";
				break;
				}
			}
		}
			break;
		case 3: //выводит всё заметки(изначально пуст, не связан с заметками на календарь)  и возможность добавить новые 
			
			break;
		case 4:// показывает все праздники
			
			break;
		case 5:
			return 0;
			break;
		
		default:
			cout << "Wrong choose";
			break;
		
	}
}
	return 0;
}

