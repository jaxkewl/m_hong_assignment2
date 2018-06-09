// m_hong_assignment2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dog.h"

int main()
{
	cout << "Martin Hong Assignment 2\n" << endl;
	Dog dog1;
	dog1.setName("Spot");
	dog1.setAgeInMonths(22);
	dog1.setBreed("Beagle");
	dog1.setHasFleas(false);
	dog1.setWeightInPounds(33);
	dog1.setGender(Female);
	dog1.print();
	dog1.bark();
	dog1.scratch();
	dog1.fetch();
	dog1.eat();
	dog1.sleep();
	dog1.sit();

	cout << endl;

	Dog dog2;
	dog2.setName("Tiger");
	dog2.setAgeInMonths(22);
	dog2.setBreed("Poodle");
	dog2.setHasFleas(true);
	dog2.setWeightInPounds(23);
	dog2.setGender(Male);
	dog2.print();
	dog2.bark();
	dog2.scratch();
	dog2.fetch();
	dog2.eat();
	dog2.sleep();
	dog2.sit();

	return 0;
}

