/*

*/

#include <stdio.h>

main()
{
	int n;
	int mas[100];
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