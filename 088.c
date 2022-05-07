#include <stdio.h>
int main(void)
{
	int i = 1, sum = 0;
	puts(" do-while 문");

	do {
		sum = sum +i;
		printf("i=%2d, sum = %2d\n", i, sum);
		i = i+1;
	} while (i<=10);
	puts("일단 한번은 실행하고 봅니다");
	puts("do-while 문은 조건을 나중에 체크 합니다");
	return 0;
}
