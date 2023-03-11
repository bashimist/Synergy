/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int mas[100][100];
	int n,m;
	
	printf("n= ");
	scanf("%d",&n);
	printf("m= ");
	scanf("%d",&m);
	
	srand(time(NULL));
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			mas[j][i]=rand()%11;
		}
	}
			
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			bool fl=true;
			int ch=0;
			while(fl)
			{
				fl=false;
				for(int i=0;i<m-1;i++)
				{
					if(mas[i][j]>mas[i+1][j])
					{
						int z=mas[i][j];
						mas[i][j]=mas[i+1][j];
						mas[i+1][j]=z;
						fl=true;
					}
				}
				ch++;
			}
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%3d",mas[j][i]);
		}
		printf("\n\n");
	}
}