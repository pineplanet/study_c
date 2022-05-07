#include <stdio.h>
int main(void)
{
	int i, sum = 0;
	puts(" for 문 변형");

	for (int i = 10; i >= 1; i--) {
		sum	= sum+ i;
		printf("i=%2d,sum=%2d\n", i, sum);
	}

	return 0;
}
