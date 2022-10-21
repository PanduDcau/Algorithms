#include<stdio.h>
#include<string.h>

int main()
{
	char arr[] ="apple";
	char uarr[60];
	do
	{
		printf("Guess my Favourite Fruit?");
		scanf("%s",&uarr);
	}
	while(strcmp (arr,uarr)!=0);
	printf("Correct answer!");
	
	return 0;
}
