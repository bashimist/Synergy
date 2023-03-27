/*

*/
#include <stdio.h>
#include <string.h>

void str()
{
	int i,e;
	char string[100];
	printf("Enter your string: ");
	gets(string);
	int q = strlen(string);
	printf("Result: ");
	
	for (i=0; i<strlen(string); i++)
	{
		if (i==0)
		{
			for (e=i; string[e]; e++)
			{
				string[e]=string[e+1];
				continue;
			}
			
		}
		if (!string[i+1])
		{
			string[i]=string[i+1];
			break;
		}
		printf("%c",string[i]);
	}	
}

void space(char *arr,int n)
{
	printf("Enter your new string: ");
	gets(arr);
	printf("Result without spaces: ");
	int space = 0;
	int k = 0;
	
	for (int i = 0; i < n; i++)
	{
		while (k == 0 && i < n && arr[i] == ' ') 
		{
			i++;
		}
		if (arr[i] == ' ')
		{
			if (!space)
			{
				arr[k++] = arr[i];
				space = 1;
			}
		}
		else {
			arr[k++] = arr[i];
			space = 0;
		}
	}
	arr[k] = '\0';
}

main()
{

	str();
	printf("\n\n");
	char arr[100];
	space(arr,strlen(arr));
	printf("%s", arr);
	return 0;
} 