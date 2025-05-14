#pragma once
#include <iostream>
#include<string>
using namespace std;
class ArrayList
{
private:
	int size;
	int* array;
public:
	ArrayList();
	~ArrayList();

	void add(int value);
	void add(int index, int value);
	void addAll(int* values, int size);
	void addAll( int* values, int size,int index);

	void remove(int index);
	void remove();


	int getSize();
	int get(int index,int size);

	void set(int index, int value);
	void clear();
	bool isEmpty();

	string toString();
};

