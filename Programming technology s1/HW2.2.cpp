/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW2.2.cpp
*/

#include <stdio.h>

main()
{
	int a,b;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	if(a>b)
	{
		printf("A is more than B");
	}
	else
	{
		if(a==b)
		{
			printf("A is equal to B");
		}
		else
		{
			printf("B is more than A");
		}
	}
}