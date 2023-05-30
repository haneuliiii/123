#include <iostream>
#include "Person.h"

using std::string;
using std::istream;
using std::ostream;

Person::Person()
{
	name = ""; // 디폴트 생성자
}

Person::Person(string theName) 
{
	name = theName; 
}

Person::Person(const Person& theObject) // 복사 생성자
{
	name = theObject.name; 
}

string Person::getName() const // getter 
{
	return name;
}

Person& Person::operator=(const Person& rtSide) // 대입 연산자
{
	if (this == &rtSide)  // this가 rtSide의 주소값과 같을 때
	{
		return *this; // this가 가리키는 객체를 copy해서 return
	}
	else
	{
		name = rtSide.name; // 같지 않으면 name은 rtSide의 name값 
		return *this; // this가 가리키는 객체를 copy해서 return 
	}
}

istream& operator >> (istream& inStream, Person& personObject)
{
	inStream >> personObject.name; //  >> 오버로딩 연산자
	return inStream;
}

ostream& operator << (ostream& outStream, const Person& personObject)
{ 
	outStream << personObject.getName(); // << 오버로딩 연산자
	return outStream;
}
