#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include"myheader.h"


void myswap(char val1[], char val2[])
{
	char temp[20];
	strcpy(temp, val1);
	strcpy(val1, val2);
	strcpy(val2, temp);
}
