#include <stdio.h>

int main(void)
{
	int a[] = {65,25,35,45,55};
	int i, n;
	n = sizeof(a) / sizeof(int);

	puts("------------------------");
	puts(" * 정수 배열의 초기화 * ");
	puts("------------------------");

	for (i = 0; i<n; i++)
		printf(" a[%d] = %d \n", i, a[i]);

	puts(" 개수를 적지 않아도 자동으로 계산");
	puts("---------------------------------");

	return 0;
}
