#pragma once
#include "D1.h"
#include "D2.h"

class D3 :
	private D1, public D2
{
	int d3;

public:
	void show_D1() { D1::show_D1(); }
	D3(int x, int y, int z, int i, int j);
	~D3();
	
	void show_D3();
};
