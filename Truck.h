#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

// Truck이 Vehicle으로부터 상속받는다.
class Truck : public Vehicle{
public:
	Truck(); // 디폴트 연산자
	Truck(double load, int towing, const string& mfn, int nC, const Person& own); // 5개의 인자를 받는 생성자
	Truck(const Truck& theCapacity); // 복사 생성자
	double getload() const; // getter
	int gettowing() const; // getter
	Truck& operator = (const Truck& rside); // 대입 연산자
private:
	double loadCapacity;
	int towingCapacity;
};
#endif