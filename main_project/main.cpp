#include "Manager.h"
int main() {
    int count;
    Group group;
    Initializer initializer;
    Manager manager;

    cout << "Input number of students: ";
    cin >> count;
    group.setCount(count);
    

  

    initializer.init(group);

    cout << "List of students:\n";
    for (int i = 0; i < group.getCount(); i++) {
        cout << group.getList()[i].toString() << endl;
    }

    int size = group.getCount();
    Student* bestList = manager.getBestStudents(group);

    if (bestList == nullptr) {
        cout << "\nError: best student list is null!" << endl;
    }
    else {
        cout << "\nList of best students:\n";
        for (int i = 0; i < size; i++) {
            cout << bestList[i].toString() << endl;
        }
    }

    Student* worstList = manager.getWorstStudents(group);

    if (worstList == nullptr) {
        cout << "\nError: worst student list is null!" << endl;
    }
    else {
        cout << "\nList of worst students:\n";
        for (int i = 0; i < size; i++) {
            cout << worstList[i].toString() << endl;
        }
    }

    delete[] bestList;
    delete[] worstList;

    return 0;
}