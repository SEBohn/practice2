#ifndef PIRATE_H_

#define PIRATE_H_

#include <iostream>

using namespace std;

class Pirate {

	string name;

public:

	Pirate(string);

	void setName(string);

	string getName();

	virtual string speak() = 0; // pure virtual method -- abstract method

	string toString();

};

#endif /* PIRATE_H_ */