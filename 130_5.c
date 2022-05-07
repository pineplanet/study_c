#include <stdio.h>

int main(void)
{
	int a = 50;

	puts(" printf- 주소 ");

	printf("a = %d , &a = %d \n", a, &a);
	printf("주소는 %%p ==> %p \n", &a );
	
	puts(" &a ===> a 의 시작 주소, 시작 번지 ");
	puts(" 모든 주소는 16진수 표기 이다. ");
	puts(" -------------------------------------");
	return 0;
}
