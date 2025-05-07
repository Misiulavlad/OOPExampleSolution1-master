#include "Integer.h"

int main() {
    Integer number;
    int num;

    cout << "Enter a number: ";
    cin >> num;
    number.setValue(num);

    cout << "Enter a value: ";
    cin >> num;
    Integer value(num);
    

    cout << "Initial number: "<< number.getValue()<<endl;
   

    number = number.add(value);
    cout << "Add: " << number.getValue()<<endl;

    number = number.substract(value);
    cout << "Substruct: " << number.getValue()<<endl;

    number = number.multiply(value);
    cout << "Multiply: " << number.getValue()<<endl;

    number = number.divide(value);
    cout << "Divide: " << number.getValue()<<endl;

    number = number.mod(value);
    cout << "Mod: " << number.getValue()<<endl;
    return 0;
}