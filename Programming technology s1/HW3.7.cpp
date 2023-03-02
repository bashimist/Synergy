/*

*/
#include <stdio.h>

main()
{
	int i;
	int sum=0;
	for(;i<100;i=i+1)
	{
		sum=sum+i;
		printf("%i+",i);
	}
	sum=sum+i;
	printf("%i=%i",i,sum);
}