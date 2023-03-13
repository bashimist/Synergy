/*

*/
#include <stdio.h>
#include <string.h>

main()
{
	char str[100];
	
	gets(str);
	
	//int q=strlen(str);
	
	//printf("%i",q);
	
	int q =strlen(str);
	
	char buf=str[0];
	str[0]=str[q-1];
	str[q-1]=buf;
	
	puts(str);
	
}