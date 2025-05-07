#include <iostream>
using namespace std;

class Integer {
private:
	int value;
public:
	Integer() : value(0) {}
	Integer(int value) { this->value = value; }

	int getValue();
	void setValue(int value);

	Integer add(Integer integer);
	Integer substract(Integer integer);
	Integer multiply(Integer integer);
	Integer divide(Integer integer);
	Integer mod(Integer integer);

};