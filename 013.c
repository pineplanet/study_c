#include <stdio.h>

int main(void)
{
	int a,b;
	puts("------------------------------");
	puts("** 정수 두개 입출력");
	puts("------------------------------");

	printf(" 첫 번째 정수 : ");
	scanf("%d", &a);

	printf(" 두 번째 정수 : ");
	scanf("%d",&b);

	printf("a=%d,b=%d \n",a,b);
	
	puts("------------------------------");

	return 0;
}
