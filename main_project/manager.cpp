#include "Manager.h"

Student* Manager::getBestStudents(Group& group) {
    int count2 = 0;

    for (int i = 0; i < group.getCount(); i++) {
        if (group.getList()[i].getAverageMark() >= 8) {
            ++count2;
        }
    }

    if (count2 == 0) {
        return nullptr;  
    }

    Student* best = new Student[count2];

    for (int i = 0, j = 0; i < group.getCount(); i++) {
        if (group.getList()[i].getAverageMark() >= 8) {
            best[j] = Student(group.getList()[i]);  
            j++;
        }
    }

    return best;
}

Student* Manager::getWorstStudents(Group& group) {
    int count2 = 0;

    for (int i = 0; i < group.getCount(); i++) {
        if (group.getList()[i].getAverageMark() <= 5) {
            ++count2;
        }
    }

    if (count2 == 0) {
        return nullptr;
    }

    Student* worst = new Student[count2];

    for (int i = 0, j = 0; i < group.getCount(); i++) {
        if (group.getList()[i].getAverageMark() <= 5) {
            worst[j] = Student(group.getList()[i]);
            j++;
        }
    }

    return worst;
}