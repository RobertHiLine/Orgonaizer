#include "stdafx.h"
#include "Friends.h"
#include "iostream"
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

Friends::Friends()
{
	this->inf.born.BornDay = 0;
	this->inf.born.BornMonth = 0;
	this->inf.born.BornYear = 0;
	
}


Friends::~Friends()
{

}
void Friends::AddFriend() {
	char*name, *surname, *city, *country, *street;
	int *phonenumber, day, month, year;
	surname = new char[20];
	name = new char[20];
	city = new char[20];
	country = new char[20];
	street = new char[20];
	phonenumber = new int[12];
	cin.ignore(7777, '\n');
	cout << "Enter your friend's name\n "<<endl;
	fgets(name,20,stdin);
	cout << "Enter your friend's surname\n ";
	fgets(surname,20,stdin);
	cout << "Enter your friend's country\n ";
	fgets(country, 20, stdin);
	cout << "Enter your friend's city\n ";
	fgets(city ,20, stdin);
	cout << "Enter your friend's street\n ";
	fgets(street, 20, stdin);
	cout << "Enter your friend's born day/month/year\n";
	cin >> day >> month >> year;  // добавить композицую класса календарь для проверки коректности 
	this->inf.name = name;
	this->inf.surname = surname;
	this->inf.adress.city = city;
	this->inf.adress.country = country;
	this->inf.adress.street = street;
	this->inf.phonenumber = phonenumber;
	this->inf.born.BornDay = day;
	this->inf.born.BornMonth = month;
	this->inf.born.BornYear = year;
	this->i++;
}
void Friends::  Print() {
	cout  << this->i << ")\n";
	cout << this->inf.adress.city;
	cout << this->inf.adress.country;
	cout << this->inf.adress.street;
	cout << this->inf.name;
	cout << this->inf.surname;
	
	cout << this->inf.born.BornDay<<".";
	cout << this->inf.born.BornMonth << ".";
	cout << this->inf.born.BornYear<<"\n";
	
}
void Friends::DeleteFriend() {
//	delete[]this->inf.name,this->inf.surname,this->inf.adress.city,this->inf.adress.country,this->inf.adress.street;
	this->i--;

}