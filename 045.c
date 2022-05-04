#include <stdio.h>

int main(void)
{
	unsigned int a = 4300000000;
	__int64_t b = 100000000000000;

	puts("-------------------------");
	puts("* 큰 정수의 처리 *");
	puts("-------------------------");

	printf(" a = %d \n",a);
	printf(" b = %llu \n",b);

	puts(" intsms -21억 ~ 21억");
	puts(" unsigned int는 42.9억");
	puts(" __int64는 2^64까지 표현 가능");
	puts(" %I64d는 2^64까지 표현 가능");
	puts(" -------------------------");
	
	return 0;
}
