#include <stdio.h>

int main(void)
{
	int number;
	
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &number);
	
	if(number>=0)
		printf("������ %d�Դϴ�.\n", number);
	else
		printf("������ %d�Դϴ�.\n", -number);
		
	return 0;
}
