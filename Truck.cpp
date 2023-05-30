#include <iostream>
#include "Truck.h"

Truck::Truck() : Vehicle() // ����Ʈ ������
{
    loadCapacity = 0.0;
    towingCapacity = 0;
}

Truck::Truck(double load, int towing, const string& mfn, int nC, const Person& own) : Vehicle(mfn, nC, own)
{
    loadCapacity = load;
    towingCapacity = towing;
}

Truck::Truck(const Truck& theCapacity) : Vehicle(theCapacity) // ���� ������
{
    loadCapacity = theCapacity.loadCapacity;
    towingCapacity = theCapacity.towingCapacity;
}

double Truck::getload() const // getter
{
    return loadCapacity;
}

int Truck::gettowing() const // getter
{
    return towingCapacity;
}

Truck& Truck::operator = (const Truck& rside) // ���� ������
{ 
    if (this == &rside)
    {
        return *this;
    }
    else
    {
        Vehicle::operator=(rside);
        loadCapacity = rside.loadCapacity;
        towingCapacity = rside.towingCapacity;
        return *this;
    }
}