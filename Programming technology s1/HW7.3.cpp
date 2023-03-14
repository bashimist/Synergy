/*

*/
#include <stdio.h>

void sum(int q)
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
}

main()
{
	int q,w,e;
	printf("Num: ");
	sum(q);
}