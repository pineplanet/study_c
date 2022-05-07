#include <stdio.h>
int main(void)
{
	int i = 100, sum = 0;

	puts("-----------------------------------------------");
	puts(" * 조건이 처음부터 거짓을 경우 while 문 ");
	puts("-----------------------------------------------");

	while (i<=10) {
		sum = sum +1;
		printf("i =%2d, sum=%2d\n", i, sum);
	}
	puts("while 문 한번도 수행되지 않는다. ");
	puts("블럭을 그냥 빠져나간다");
	return 0;
}
