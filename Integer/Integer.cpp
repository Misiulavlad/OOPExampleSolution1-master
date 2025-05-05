#include "Integer.h"

int Integer::getValue() {
	return value;
}

void Integer::setValue(int value) {
	this->value = value;
}

Integer Integer::add(Integer integer) {
	return Integer(value + integer.value);
}

Integer Integer::substract(Integer integer) {
	return Integer(value - integer.value);
}

Integer Integer::multiply(Integer integer) {
	return Integer(value * integer.value);
}

Integer Integer::mod(Integer integer) {
	return Integer(value % integer.value);
}

Integer Integer::divide( Integer integer) {
	if (integer.value != 0) {
		return Integer(value / integer.value);
	}
	else {
		cout << "Error: Division by zero is not allowed!" << endl;
		return *this;
	}
}
