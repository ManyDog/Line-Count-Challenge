// Line Count Challenge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a, b, sub;//This bitch defines yo variables
	printf_s("Give me a number:\n");
	scanf_s("%d", &a);//You use a scanf too tell these bois to give ya the variables
	printf_s("Give me another:\n");
	scanf_s("%d", &b);
	sub = a - b;//Subtract like in school, bitch!
	printf_s("Subtracted this is = %d\n", sub);//This is the answer yo
    return 0;
}

