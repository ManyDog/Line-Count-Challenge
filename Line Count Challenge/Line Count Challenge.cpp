// Line Count Challenge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a, b, sub;
	printf_s("Give me a number:\n");
	scanf_s("%d", &a);
	printf_s("Give me another:\n");
	scanf_s("%d", &b);
	sub = a - b;
	printf_s("Subtracted this is = %d\n", sub);
    return 0;
}

