#include "student.h"
istream& operator >>(istream& in, Student& p) {
	in >> p.name >> p.group >> p.age >> p.on_class;
	return in;
}
ostream& operator <<(ostream& os, const Student& p) {
	return os << "name = " << p.name << "\ngroup = " << p.group << "\nage = " << p.age << "\non_class = " << p.on_class << endl;
}
Student& Student :: operator=(const Student& other){
	this->name = other.name;
	this->group = other.group;
	this->age = other.age;
	this->on_class = other.on_class;
	return *this;
	}