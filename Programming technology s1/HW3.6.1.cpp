/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW3.6.1.cpp
*/
#include <stdio.h>

main()
{
	int a=1;
	while(a!=7)
	{
		printf("Enter the number: ");
		scanf("%i",&a);
		if(a%2 == 0 && a>10)
		{
			printf("The number is divided into 2 and more than 10\n");
		}
		else
		{
			if(a%3 == 0 && a>10)
			{
				printf("The number is divided into 3 and more than 10\n");
			}
			else
			{
				if(a>10)
				{
					printf("The number is more than 10\n");
				}
				else
				{
					if(a>7 && a<10 && a%2 == 0)
					{
						printf("The number is less than 10 and is divided by 2\n");
					}
					else
					{
						if(a>7 && a<10 && a%3 == 0)
						{
							printf("The number is less than 10 and is divided by 3\n");
						}
						else
						{
							if(a>7 && a%2 == 0)
							{
								printf("The number is greater and is divided by 2\n");
							}
							else
							{
								if(a>7 && a%3 == 0)
								{
									printf("The number is greater and is divided by 3\n");
								}
								else
								{
									if(a<7 && a%2 == 0)
									{
										printf("The number is less and is divided by 2\n");
									}
									else
									{
										if(a<7 && a%3 == 0)
										{
											printf("The number is less and is divided by 3\n");
										}
										else
										{
											if(a<7)
											{
												printf("The number is less\n");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		
	}
	printf("You guessed it! Congratulation!\n");
	
}