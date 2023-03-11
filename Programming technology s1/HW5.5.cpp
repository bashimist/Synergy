/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW5.5.cpp
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
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%i",&mas[i][j]);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%3d",mas[i][j]);
		}
		printf("\n\n");
	}
	
	for(int j=0;j<n;j++)
	{
		for(int t=0;t<m;t++)
		{
			for(int i=0;i<m-1;i++)
			{
				if(mas[i][j]>mas[i+1][j])
				{
					int q=mas[i][j];
					mas[i][j]=mas[i+1][j];
					mas[i+1][j]=q;
				}
			}
		}
	}
	printf("\n\n\n\n");
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%3d",mas[j][i]);
		}
		printf("\n\n");
	}
}