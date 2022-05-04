#include <stdio.h>

int main(void)
{
	char a,b;
	puts("-----------------------------");
	
	puts("** 두문자 입출력");
	puts("-----------------------------");

	printf(" 첫 번째 문자 입력: ");
	scanf("%c",&a);

	printf("두 번째 문자 입력: ");
	fflush(stdin);
	scanf("%c",&b);
	printf(" a=%c,b=%c \n", a,b);
	puts("------------------------------");
	puts("fflusf(stdin)은 키보드 버퍼 비우기 입니다.");
	puts("------------------------------");
	return 0;
}	
