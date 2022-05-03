#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name,group;
	int age;
	bool on_class;
public:
	friend istream& operator>>(istream& in, Student& p);
	friend ostream& operator<<(ostream& os, const Student& p);
	Student& operator= (const Student& other);	
};