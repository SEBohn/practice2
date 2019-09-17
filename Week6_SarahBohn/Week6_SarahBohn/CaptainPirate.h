#ifndef CAPTAINPIRATE_H_

#define CAPTAINPIRATE_H_
#include"Pirate.h"

class CaptainPirate : public Pirate

{

	string pet;

public:

	CaptainPirate(string, string);

	void setPet(string);

	string getPet();

	string toString();

	string speak();

};

#endif 