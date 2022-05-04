#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = {100,200,300,400,500};
	int n = sizeof(a) / sizeof(int);
	
	puts("-----------------------");
	puts(" * 배열의 점자 구하기 *");
	puts("-----------------------");

	printf(" sizeof(a) = %d byte, sizeof(int) = %d \n", sizeof(a), sizeof(int));
	puts("-----------------------");
	for (i = 0 ; i<n; i++)
		printf(" a[%d] = %2d, &a[%d] = %d \n",i, a[i], i, &a[i]);
	puts("-----------------------");
	puts("a 는 20바이트, int는 4바이트");
	puts("전체를 하나로 나누는 것입니다");
	puts(" 뒤로 가면서 이유를 배웁니다.");

	return 0;
}
