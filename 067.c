# include <stdio.h>

int main(void)
{
	int i;
	int a[5] = {0};
	int n = sizeof(a) / sizeof(int);

	puts("-------------");
	puts(" * 정수 배열의 초기화 ");
	puts("-------------");
	puts("-------------");

	for (i  = 0; i<n; i++)
		printf(" a[%d] = %2d, &a[%d] = %d \n",i, a[i], i, &a[i]);
	puts("-------------");
	puts(" 0이나 0,은 같은 표현 입니다");

	return 0;
}
