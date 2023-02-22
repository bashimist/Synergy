/*
https://github.com/bashimist/Synergy/blob/main/Programming%20technology%20s1/HW2.6.cpp
*/

#include <stdio.h>

main ()
{
  int day,mounth,year;
  printf("Enter your birthday\n");
  printf("Day: ");
  scanf("%i",&day);
  printf("Mounth: ");
  scanf("%i",&mounth);
  printf("Year: ");
  scanf("%i",&year);

  if ((year % 400 == 0)||((year % 4 == 0)&&(year % 100 != 0)))
  {printf("leap year");}
  else
  {printf("non-leap year");}

switch((year%100)%12){
  case 0:
  {printf(" and Year of the rat");}break;

  case 1:
  {printf(" and Year of the ox");}break;

  case 2:
  {printf(" and Year of the tiger");}break;

  case 3:
  {printf(" and Year of the rabbit");}break;

  case 4:
  {printf(" and Year of the dragon");}break;

  case 5:
  {printf(" and Year of the snake");}break;

  case 6:
  {printf(" and Year of the horse");}break;

  case 7:
  {printf(" and Year of the goat");}break;

  case 8:
  {printf(" and Year of the monkey");}break;

  case 9:
  {printf(" and Year of the rooster");}break;

  case 10:
  {printf(" and Year of the dog");}break;

  case 11:
  {printf(" and Year of the pig");}break;
}

switch (mounth){
 case 1:
  if (day <= 20)
    {printf("\nSign of the zodiac: Capricorn");}
  else
    {printf("\nSign of the zodiac: Aquarius");}break;
 case 2:
  if (day <= 20)
    {printf("\nSign of the zodiac: Aquarius");}
  else
    {printf("\nSign of the zodiac: Pisces");}break;
 case 3:
  if (day <= 20)
    {printf("\nSign of the zodiac: Pisces");}
  else
    {printf("\nSign of the zodiac: Aries");}break;
 case 4:
  if (day <= 20)
    {printf("\nSign of the zodiac: Aries");}
  else
    {printf("\nSign of the zodiac: Taurus");}break;
 case 5:
  if (day <= 20)
    {printf("\nSign of the zodiac: Taurus");}
  else
    {printf("\nSign of the zodiac: Gemini");}break;
 case 6:
  if (day <= 20)
    {printf("\nSign of the zodiac: Gemini");}
  else
    {printf("\nSign of the zodiac: Crayfish");}break;
 case 7:
  if (day <= 20)
    {printf("\nSign of the zodiac: Crayfish");}
  else
    {printf("\nSign of the zodiac: Leo");}break;
 case 8:
  if (day <= 20)
    {printf("\nSign of the zodiac: Leo");}
  else
    {printf("\nSign of the zodiac: Virgo");}break;
 case 9:
  if (day <= 20)
    {printf("\nSign of the zodiac: Virgo");}
  else
    {printf("\nSign of the zodiac: Libra");}break;
 case 10:
  if (day <= 20)
    {printf("\nSign of the zodiac: Libra");}
  else
    {printf("\nSign of the zodiac: Scorpio");}break;
 case 11:
  if (day <= 20)
    {printf("\nSign of the zodiac: Scorpio");}
  else
    {printf("\nSign of the zodiac: Sagittarius");}break;
 case 12:
  if (day <= 20)
    {printf("\nSign of the zodiac: Sagittarius");}
  else
    {printf("\nSign of the zodiac: Capricorn");}break;
 default:
   {printf("Out of space");}break;

}}