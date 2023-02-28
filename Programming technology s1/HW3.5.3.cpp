/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW3.5.3.cpp
*/

#include <stdio.h>

main()
{
	int i=5;
	int sum=0;
	while(i<15)
	{
		sum=sum+i;
		printf("%i+",i);
		i=i+1;
	}
	sum=sum+i;
	printf("%i=%i",i,sum);
}