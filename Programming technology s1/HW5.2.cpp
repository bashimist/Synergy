/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW5.2.cpp
*/
#include <stdio.h>

main()
{
	int mas[100][100];
	
	int n,m;
	printf("n= ");
	scanf("%d",&n);
	printf("m= ");
	scanf("%d",&m);
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			scanf("%i",&mas[j][i]);
		}
	}

	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%3i",mas[j][i]);
		}
		printf("\n\n");
	}
}