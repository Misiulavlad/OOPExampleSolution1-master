#pragma once
#include "students.h"
class Group
{
private:
	Student* list;
	int count;
public:
	Group();
	Group(Student* list, int count);
	~Group();

	Student getStudent(int index);
	void add(Student student);
	void remove(int index);
	void set(Student st1, Student st2);
	int getCount(int count);
	string toString();
};