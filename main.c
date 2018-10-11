#include <stdio.h>

int main(void)
{
	int answer=59;
	int trial;
	int i;
	
	do
	{
		printf("Guess a number : ");
		scanf("%d", &i);
		
		trial++;
		
		if(i<answer)
			printf("Low\n");
		else if(i>answer)
			printf("High\n");
	}
		while(i!=answer);
	

		printf("Congratulation! Trials : %d", trial);

		
	return 0;
}
