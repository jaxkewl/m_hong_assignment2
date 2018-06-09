#pragma once

#include <iostream>
using namespace std;

enum Gender { Male = 0, Female = 1 };

class Dog
{

public:
	Dog();
	~Dog();
	void print();
	void eat();
	void bark();
	void sit();
	void fetch();
	void sleep();
	void scratch();


	std::string getName() const { return name; }
	void setName(std::string val) { name = val; }

	std::string getBreed() const { return breed; }
	void setBreed(std::string val) { breed = val; }

	Gender getGender() const { return gender; }
	void setGender(Gender val) { gender = val; }

	int getAgeInMonths() const { return ageInMonths; }
	void setAgeInMonths(int val) { ageInMonths = val; }

	float getWeightInPounds() const { return weightInPounds; }
	void setWeightInPounds(float val) { weightInPounds = val; }

	bool getHasFleas() const { return hasFleas; }
	void setHasFleas(bool val) { hasFleas = val; }
private:
	static const string DEFAULT_STR_VALUE;
	string name = "";
	string breed = "";
	Gender gender;
	int ageInMonths;
	float weightInPounds;
	bool hasFleas;


};
