#include "stdafx.h"
#include "Note.h"
#include <fstream>
#include <iostream>
using namespace std;
Note::Note()
{
}


Note::~Note()
{
}
void Note::AddNote() {
	char buffer[255];
	ofstream note("E:\project\Orgonaizer.txt");
	cin.getline(buffer, sizeof(buffer));
	note << buffer << "\n"; 
	for (int i = 0; i <= 255; i++)
		buffer[i] = 0;// Не работает , закрывает проект , хз почему
	system("cls");
	note.close(); //Закрываем файл
}
