#include "initializer.h"

void Initializer::init(Group& group) {
    int count = group.getCount();

    if (count > 0) {
        group.setList(new Student[count]);
    }

    if (!group.getList()) {
        cout << "Error: list is null! Initialization failed." << endl;
        return;
    }

    string names[]{ "Anna", "Alex", "Vlad", "Matvey", "Ivan", "Timur", "Timofey",
                    "Nikita", "Vladimir", "Bogdan", "Rodion", "Alexey", "Daniil",
                    "Victor", "Kate", "Alice", "Maks" };

    int minMark = 4, maxMark = 10;
    int minAge = 13, maxAge = 18;

    for (int i = 0; i < count; i++) {
        group.getList()[i].setName(names[rand() % 17]);
        group.getList()[i].setAge(rand() % (maxAge - minAge + 1) + minAge);
        for (int j = 0; j < group.getList()[i].getCountMark(); j++) {
            *(group.getList()[i].getMarks() + j) = rand() % (maxMark - minMark + 1) + minMark;
        }
    }

}