/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW2.3.cpp
*/
#include <stdio.h>

main()
{
	int pin1,pin2;
		printf("pin1=");
		scanf("%i",&pin1);
		printf("pin2=");
		scanf("%i",&pin2);
		
	if(((pin1==123)&&(pin2==321))||((pin1==456)&&(pin2==654)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}	
}