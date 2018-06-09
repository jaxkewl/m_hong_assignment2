#include "stdafx.h"
#include "Dog.h"

const string Dog::DEFAULT_STR_VALUE = "NOT SET";

Dog::Dog() : breed(DEFAULT_STR_VALUE), name(DEFAULT_STR_VALUE)
{
}


Dog::~Dog()
{
}

void Dog::eat()
{
	cout << "Chomp Chomp Chomp" << endl;
}
void Dog::bark()
{
	cout << "woof woof woof" << endl;
}
void Dog::sit()
{
	cout << "This dog is siting" << endl;
}
void Dog::fetch()
{
	cout << "This dog is fetching" << endl;
}
void Dog::sleep()
{
	cout << "ZZZ ZZZ ZZZ" << endl;
}
void Dog::scratch()
{
	if (hasFleas)
	{
		cout << "Scratch Scratch Scratch" << endl;
	}
}
void Dog::print()
{
	cout << "Name: " << getName().c_str() << endl;
	cout << "Breed: " << getBreed().c_str() << endl;
	if (getGender() == Male) {
		cout << "Gender: Male" << endl;
	}
	else
	{
		cout << "Gender: Female" << endl;
	}
	cout << "Age In Months: " << getAgeInMonths() << endl;
	cout << "Weight (lbs): " << getWeightInPounds() << endl;
	if (getHasFleas()) {
		cout << "This dog has fleas" << endl;
	}
	else
	{
		cout << "This dog does not have fleas" << endl;
	}
}
