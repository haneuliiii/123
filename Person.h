#ifndef PERSON_H // ��������� �ߺ� ���Ǹ� ��������
#define PERSON_H 
#include <iostream>

// using ����
using std::string; 
using std::istream; 
using std::ostream;

class Person
{
public:
	Person(); // ����Ʈ ������
	Person(string theName); // 1���� ���ڸ� ���� ������
	Person(const Person& theobject); // ���� ������
	string getName() const; // ��� ���� name�� ���� getter�Լ�
	Person& operator = (const Person& rtSide); // ���� ������
	friend istream& operator >> (istream& inStream, Person& personObject); // >> �����ε� ������
	friend ostream& operator << (ostream& outStream, const Person& personObject); // << �����ε� ������
private:
	string name;
};

#endif
