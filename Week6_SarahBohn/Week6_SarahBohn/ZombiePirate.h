#pragma once
#ifndef ZOMBIEPIRATE_H_

#define ZOMBIEPIRATE_H_
#include "Pirate.h"
#include <string>

class ZombiePirate :public Pirate

{
	int brainHunger;

public:

	ZombiePirate(string, int);

	void setBrainHunger(int);

	int getBrainHunger();

	string toString();

	string speak();

};

#endif 