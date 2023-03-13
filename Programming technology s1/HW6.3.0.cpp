/*

*/
#include <stdio.h>
#include <string.h>

main()
{
	char str[100];
	printf("Enter your word: ");
	gets(str);
	
	int i;
	printf("symbol two is= ");
	printf("%c",str[1]);
	printf("\n");
	
	int j=strlen(str);
	
	printf("last symbol= ");
	printf("%c",str[j-1]);
	printf("\n");
	
	char buf=str[0];
	str[0]=str[j-1];
	str[j-1]=buf;
	printf("swap first and last symbol= ");
	puts(str);
	printf("\n\n");
	
	
	printf("Enter new word: ");
	gets(str);
	printf("Enter number to delete symbol: ");
	scanf("%i",&i);
	for(int j=i-1;j<strlen(str);j++)
	{
		str[j]=str[j+1];
	}
	printf("Result: ");
	puts(str);
}