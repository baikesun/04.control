#include <stdio.h>

int main(void)
{
	char c;
	
	printf("input a char : ");
	scanf("%c", &c);
	
	if('0'<=c&&c<='9')
		printf("This is a NUMBER.\n");
	else if('A'<=c&&c<='Z')
		printf("This is a CAPITAL LETTER.\n");
	else if('a'<=c&&c<='z')
		printf("This is a SMALL LETTER.\n");
	else
		printf("This is a SPECIAL CHAR.\n");
	
	return 0;
}
