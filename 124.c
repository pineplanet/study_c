#include <stdio.h>
int main(void)
{
	char re_value;
	puts(" * putchar 함수 * ");

	putchar ('A');
	re_value = putchar(65);

	printf("\n re_value = %c \n",re_value);
	printf(" EOF = %d \n", EOF);

	puts("------------------------------");
	puts(" 함수에서 인수와 리턴값은 중요합니다.");
	puts(" putchar 함수는 정수를 인수로 받아요.");
	puts(" 성공하면 출력한 문자를 리턴하고요 ");
	puts(" 실패하면 EOF 를 리턴하지요 ");
	puts(" EOF 는 상수로 -1 입니다. ㅣ");
	return 0;
}
