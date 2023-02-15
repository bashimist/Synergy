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