/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW3.8.cpp
*/
#include <stdio.h>
#define N 4

main()
{
	int min;
	int max;
	int arr[N];
	float k;
	int i;
	int n;
	int sum;
	printf("Enter the number of digits: ");
	scanf("%i",&n);
	for(i=0; i<n; i++)
	{
		printf("[%i] -> ", i);
		scanf("%i",&arr[i]);
	}
	sum = 0;
	for(i = 0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	k = sum / n;
	printf("The amount of the array: %i\n",sum);
	printf("Average: %f\n",k);
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
			
		if (max < arr[i])
			max = arr[i];
	}
	printf("min value [%i]\n", min, arr[min]);
	printf("max value [%i]\n", max, arr[max]);
}
