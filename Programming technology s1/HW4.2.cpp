/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW4.2.cpp
*/

#include <stdio.h>

main()
{
	int n;
	int mas[7];
	printf("Number of array elements: ");
	scanf("%i",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%i ",mas[i]);
	}
}