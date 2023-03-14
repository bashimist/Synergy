/*

*/
#include <stdio.h>
/*
int sum(int a,int b)
{
	return a+b;
}

main()
{
	int q,w;
	printf("q= ");
	scanf("%d",&q);
	printf("w= ");
	scanf("%d",&w);
	
	int s=sum(q,w);
	
	printf("%d",s);
}
*/
void sum()
{
	int q,w;
	printf("q= ");
	scanf("%d",&q);
	printf("w= ");
	scanf("%d",&w);
	
	printf("%d",q+w);
}

int main()
{
	sum();
	return 1;
}