#include <stdio.h>

int main(void)
{
	char a,b;
	puts("-------------------------");
	puts("** 두 문자 입출력 **");
	puts("-------------------------");
	printf(" 첫 번째 문자 입력:");
	a= getchar();

	puts("두번째 문자 입력");
	fflush(stdin);
	b = getchar();

	printf("a=%c, b=%c \n",a,b);
	puts("-------------------------");
	puts("문자만 입력시는 getchar 함수를 추천합니다.");
	puts("-------------------------");
	
	return 0;
}
