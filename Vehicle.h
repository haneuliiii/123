#ifndef VEHICLE_H
#define VEHICLE_H
#include "Person.h"

// using ����
using std::string;


class Vehicle {
public:
	Vehicle(); // ����Ʈ ������
	Vehicle(const string& mfn, int nC, const Person& own); // 3���� ���ڸ� ���� ������
	Vehicle(const Vehicle& theItem); // ���� ������
	string getmfn() const; // manufacturerName�� getter�Լ�
	int getnC() const; // numCylinders�� getter �Լ�
	Person getown() const; // owner�� getter �Լ�
	Vehicle& operator = (const Vehicle& rightside); //���� ������
private:
	string manufacturerName;
	int numCylinders;
	Person owner;
};
#endif
