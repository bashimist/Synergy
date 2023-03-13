/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW6.4.cpp
*/
#include <stdio.h>
#include <string.h>

main()
{
	char str[100];
	printf("Enter your word: ");
	gets(str);
	int q = strlen(str);
	printf("Word without first symbol: ");
	for(int i=0;i<strlen(str);i++)
	{
		str[i]=str[i+1];
		printf("%c",str[i]);
	}

	printf("\n\n");
	printf("Enter new word: ");
	gets(str);
	int c = strlen(str);
	for(int i=c-1;i>-1;i--)
	putchar(str[i]);

}