/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW2.3.1.cpp
*/
#include <stdio.h>

main()
{
	long long int login,passwd;
		printf("login=");
		scanf("%lli",&login);
		printf("passwd=");
		scanf("%lli",&passwd);
		
	if(((login==9223372036854555801)&&(passwd==9223372036854775801))||((login==9223372036854555800)&&(passwd==9223372036854775800)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}	
}