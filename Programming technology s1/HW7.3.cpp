/*

*/
#include <stdio.h>

void sum(int q)/*
{
	int w, e, x, y;
	scanf("%d", &x);
	if(x < 0)
	{
    printf("Error\n"); 
	}
	q=0; 
	w=x+1;
    do
  	{
		e = (q+w)/2;
    	y = e*e;
    	if(x > y)q = e; 
		else w = e;
  	}
  	while((y>x) || (y<x));
  	
  	printf("%d", e);
  	return; 
}*/
{
	int i;
	scanf("%d";&i);
	for (i = 0; i < number / 2; i++)
        if (i * i == number) 
		{
		return 1;
        }
}
main()
{
	int q;
	printf("Num: ");
	sum(q);
}