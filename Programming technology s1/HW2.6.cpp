/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW2.6.cpp
*/

#include <stdio.h>
#include <iostream>

int main ()
{
	int year;
	printf("Enter your birthday\n");
	/*printf("Day: ");
	scanf("%i",&d);
	printf("Mounth: ");
	scanf("%i",&m);*/
	printf("Year: ");
	scanf("%i",&year);
	
	if ((year % 400 == 0)||((year % 4 == 0)&&(year % 100 != 0)))
	{printf("leap year");}
	else
	{printf("non-leap year");}
			
	switch((year%100)%12)
	{
		case 0:
		std::cout<< " and " << "year of the rat";break;
        case 1:
        std::cout<< " and " << "Year of the ox";break;
        case 2:
        std::cout<< " and " << "Year of the tiger";break;
        case 3:
        std::cout<< " and " << "Year of the rabbit";break;
        case 4:
        std::cout<< " and " << "Year of the dragon";break;
        case 5:
        std::cout<< " and " << "Year of the snake";break;
        case 6:
        std::cout<< " and " << "Year of the horse";break;
        case 7:
        std::cout<< " and " << "Year of the goat";break;
        case 8:
        std::cout<< " and " << "Year of the monkey";break;
        case 9:
        std::cout<< " and " << "Year of the rooster";break;
        case 10:
        std::cout<< " and " << "Year of the dog";break;
        case 11:
        std::cout<< " and " << "Year of the pig";break;
        default:
        std::cout<< " and " << "Out of space";break;	
	}
			
			
		
}