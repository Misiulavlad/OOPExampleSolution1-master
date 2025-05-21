#include "Worker.h"
Worker::Worker() :Worker("", 0, false, 0.0, "") {
	cout << "Worker default constructor" << endl;
}
Worker::Worker(string name, int age, bool gender, double salary, string company) : Human(name, age, gender) {
	this->salary = salary;
	this->company = company;
}

Worker::Worker(const Worker& worker) :Human(worker) {
	this->salary = salary;
	this->company = company;
}
Worker::~Worker() {
	cout << "Worker default destructor" << endl;
}

double Worker::getSalary() {
	return salary;
}
void Worker::setSalary(double salary) {
	this->salary = salary;
}
string Worker::getCompany() {
	return company;
}
void Worker::setCompany(string company) {
	this->company = company;
}

string Worker::toString() {
	string s = "";
	s += to_string(salary)
		+ ", " + company;
	return Human::toString() + s;
}