#include <stdio.h>
int main(void)
{
	int i = 1, sum = 0;
	puts(" * while 문 ");

	while (i<=10) {
		sum = sum+1;
		printf("i=%2d, sum= %2d\n", i, sum);
		i = i+1;
	}
	/* condition */
	puts("변수 선언시 i로 초기화 해줘야 합니다");
	puts("while 문 내부에서 i의 값을 증가 시킵니다.");
	return 0;
}
