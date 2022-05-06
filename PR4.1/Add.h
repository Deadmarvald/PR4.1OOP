#pragma once
#include <iostream>

class Add
{
private:
	int x, y;
public:
	Add();
	Add(int x, int y);
	~Add() { };
	
	int GetX() { return x; }
	int GetY() { return y; }

	virtual void Sum();
};