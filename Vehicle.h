#ifndef VEHICLE_H
#define VEHICLE_H
#include "Person.h"

// using 선언
using std::string;


class Vehicle {
public:
	Vehicle(); // 디폴트 생성자
	Vehicle(const string& mfn, int nC, const Person& own); // 3개의 인자를 가진 생성자
	Vehicle(const Vehicle& theItem); // 복사 생성자
	string getmfn() const; // manufacturerName의 getter함수
	int getnC() const; // numCylinders의 getter 함수
	Person getown() const; // owner의 getter 함수
	Vehicle& operator = (const Vehicle& rightside); //대입 연산자
private:
	string manufacturerName;
	int numCylinders;
	Person owner;
};
#endif
