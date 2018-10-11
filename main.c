#include <stdio.h>

int main(void)
{
	int num=0;
	char str[100];
	char c;
	
	printf("input a string : ");
	
	while ((c=getchar()) != '\n')
	{
		if('0'<=c && c<='9')
		{
			num++;
		}
	}
	
	printf("The number of digits is %d", num);
	
	return 0;
}
