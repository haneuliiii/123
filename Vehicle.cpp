#include <iostream>
#include "Vehicle.h"

using std::string;

Vehicle::Vehicle() // 디폴트 생성자
{
	manufacturerName = "";
	numCylinders = 0;
	owner = Person();
}

Vehicle::Vehicle(const string& mfn, int nC, const Person& own)
{
	manufacturerName = mfn;
	numCylinders = nC;
	owner = own;
}

Vehicle::Vehicle(const Vehicle& theItem) // 복사 생성자
{
	manufacturerName = theItem.manufacturerName;
	numCylinders = theItem.numCylinders;
	owner = theItem.owner;
}

string Vehicle::getmfn() const // getter
{
	return manufacturerName;
}

int Vehicle::getnC() const // getter
{
	return numCylinders;
}

Person Vehicle::getown() const // getter
{
	return owner;
}

Vehicle& Vehicle::operator = (const Vehicle& rightside) 
{
	if (this == &rightside) // 대입 연산자
	{
		return *this;
	}
	else
	{
		manufacturerName = rightside.manufacturerName;
		numCylinders = rightside.numCylinders;
		owner = rightside.owner;
		return *this;
	}
}