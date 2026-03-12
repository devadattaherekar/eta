#pragma once
#include"A.h"

class XYZ
{
	int x;
public: XYZ();
	  XYZ(int);
	  int getx()const;
	  //operator ABC(); // will not any arugment will not have any return type
	  void showx();
};