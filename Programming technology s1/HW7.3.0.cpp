/*

*/
#include <stdio.h>

int auth(int y)
{
	if(2022-y>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	int y;
	printf("God= ");
	scanf("%d",&y);
	
	int p=auth(y);
	
	if(p==1)
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
	
	return 1;
}