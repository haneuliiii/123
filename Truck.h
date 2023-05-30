#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

// Truck�� Vehicle���κ��� ��ӹ޴´�.
class Truck : public Vehicle{
public:
	Truck(); // ����Ʈ ������
	Truck(double load, int towing, const string& mfn, int nC, const Person& own); // 5���� ���ڸ� �޴� ������
	Truck(const Truck& theCapacity); // ���� ������
	double getload() const; // getter
	int gettowing() const; // getter
	Truck& operator = (const Truck& rside); // ���� ������
private:
	double loadCapacity;
	int towingCapacity;
};
#endif