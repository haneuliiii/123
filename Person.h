#ifndef PERSON_H // 헤더파일의 중복 정의를 막기위함
#define PERSON_H 
#include <iostream>

// using 선언
using std::string; 
using std::istream; 
using std::ostream;

class Person
{
public:
	Person(); // 디폴트 생성자
	Person(string theName); // 1개의 인자를 가진 생성자
	Person(const Person& theobject); // 복사 생성자
	string getName() const; // 멤버 변수 name에 대한 getter함수
	Person& operator = (const Person& rtSide); // 대입 연산자
	friend istream& operator >> (istream& inStream, Person& personObject); // >> 오버로딩 연산자
	friend ostream& operator << (ostream& outStream, const Person& personObject); // << 오버로딩 연산자
private:
	string name;
};

#endif
