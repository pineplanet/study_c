#include <stdio.h>

int main(void)
{
	int a = 100;
	double b = 3.14;

	puts("----------------------------");
	puts(" ** C 언어의 주소 ** ");
	puts("----------------------------");

	printf(" a = %d , &a = %d \n", a, &a);
	printf(" b = %.2lf , &b = %d \n", b, &b);
	printf(" a = %d byte, b = %d byte \n",sizeof(a), sizeof(b));
	puts("---------------------");			
	puts(" &a는a의 시작주소를 의미 ");			
	puts("주소는 단위는 바이트 ");			
	puts("---------------------");			
}
