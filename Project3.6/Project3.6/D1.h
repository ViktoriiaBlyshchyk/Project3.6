#pragma once
#include "B1.h"

class D1 :
	public B1
{
	int d1;

public:
	D1(int x, int y);
	~D1();

	void show_D1();
};
