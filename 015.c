#include <stdio.h>

int main(void)
{
	char btype;
	puts("----------------------------");
	puts(" **문자 입출력");
	puts("----------------------------");

	printf(" 혈액형을 입력하세요 : ");
	//scanf("%c", &btype);

	btype=getchar();
	printf("당신의 혈액형은 %c형 입니다.\n",btype);
	puts("----------------------------");
	puts(" 문자 입력은 scanf(%c),getchar 두가지 방식이 있습니다.");

	puts("----------------------------");

	return 0;
}
	

