#include <stdio.h>
int main(void)
{
	int i, sum = 0;

	for (int i = 100; i <=10; ++i) {
		sum = sum +i ; 
		printf("i = %2d, sum = %2d\n", i, sum);
	}
	puts(" for 문을 한번도 수행 하지 않는다 \n 블럭을 그냥 빠져 나간다");
	return 0;
}
