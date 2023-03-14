/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mass(int *mas, int n)
{
	int i;
	mas = (int*)malloc(sizeof(int)*n);
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		mas[i]=rand()%100;
		printf("%3d",mas[i]);
	}	
}

int main()
{
	int *mas = nullptr;
	int q=10;
	int w=7;

	mass(mas, q);
	printf("\n\n");
	mass(mas, w);

	return 0;
}
