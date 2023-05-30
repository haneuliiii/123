#include <iostream>
#include "Person.h"

using std::string;
using std::istream;
using std::ostream;

Person::Person()
{
	name = ""; // ����Ʈ ������
}

Person::Person(string theName) 
{
	name = theName; 
}

Person::Person(const Person& theObject) // ���� ������
{
	name = theObject.name; 
}

string Person::getName() const // getter 
{
	return name;
}

Person& Person::operator=(const Person& rtSide) // ���� ������
{
	if (this == &rtSide)  // this�� rtSide�� �ּҰ��� ���� ��
	{
		return *this; // this�� ����Ű�� ��ü�� copy�ؼ� return
	}
	else
	{
		name = rtSide.name; // ���� ������ name�� rtSide�� name�� 
		return *this; // this�� ����Ű�� ��ü�� copy�ؼ� return 
	}
}

istream& operator >> (istream& inStream, Person& personObject)
{
	inStream >> personObject.name; //  >> �����ε� ������
	return inStream;
}

ostream& operator << (ostream& outStream, const Person& personObject)
{ 
	outStream << personObject.getName(); // << �����ε� ������
	return outStream;
}
