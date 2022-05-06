#include "Add.h"
#include <iostream>

using namespace std;

Add::Add() : x(0), y(0)
{ }

Add::Add(int x, int y) : x(x), y(y)
{ }

void Add::Sum()
{
	int sum = x + y;

	cout << sum << endl;
}