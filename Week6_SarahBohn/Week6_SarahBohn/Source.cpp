/*Week 6 Pirate Lab
Sarah Bohn*/

#include <iostream>
#include "CaptainPirate.h"
#include "ZombiePirate.h"

using namespace std;

void displayPirate(Pirate *ptrPirate);

int main()

{

	Pirate* pirates[3];

	//pirates = new Pirate[3];

	pirates[0] = new CaptainPirate("Jack", "Parrot");

	pirates[1] = new ZombiePirate("Joe", 2);

	pirates[2] = new CaptainPirate("Jim", "Sparrow");

	for (int i = 0; i<3; i++)

		cout << pirates[i]->speak() << endl;

	for (int i = 0; i<3; i++)

		delete pirates[i];

	return 0;

}

void displayPirate(Pirate* ptrPirate)

{

	CaptainPirate* cp = dynamic_cast<CaptainPirate*>(ptrPirate); // NULL if it does not work

	if (cp != NULL)

	{
		cout << "Pet: " << cp->getPet() << endl;
	}

	ZombiePirate *zp = dynamic_cast<ZombiePirate*>(ptrPirate);

	if (zp != NULL)

	{
		cout << "Brain Hunger : " << zp->getBrainHunger() << endl;
	}

}