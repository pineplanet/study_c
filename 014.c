#include <stdio.h>

int main(void)
{
	float vision;
	puts("----------------------------");
	puts("** 실수 입력 ** ");
	puts("----------------------------");

	printf(" 시력 입력: ");
	scanf("%f",&vision);

	printf("당신의 시력은 %.1f 입니다. \n",vision);
	puts("----------------------------");

	puts("정수, 실수 입력 받을 때는 변수 앞에 &를 붙입니다");
	puts("----------------------------");

	return 0;
}

