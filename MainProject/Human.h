#pragma once
#include "main.h"

class Human
{
private:
	string firstname;
	string surname;
	int age;
	char gender;
	bool alive;
public:
	Human();
	Human(string firstname, string surname, char gender,
		bool alive);
	Human();

	string getFirstName();
	void setFirstName(string firstname);
	string getSurName();
	void setSurName(string surname);
	int getAge();
	void setAge(int age);
	char getGender();
	void setGender(char gender);
	bool getAlive();
	void setAlive(bool alive);
	string toString();
};

