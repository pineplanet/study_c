#include <stdio.h>
int main(void)
{
	char a; 
	puts(" * getchar 함수 * ");
	printf("문자 입력 하세요: \n");
	a = getchar();
	printf(", a = %c \n", a);

	puts(" 끝내려면 q를 입력 : ");

	do {
		a = getchar();
		putchar(a);
	} while (a!='q');
	
	puts(" getchar 함수는 한문자입력 전용 함수 ");
	puts(" 성공하면 입력한 문자의 정수를 리턴 ");
	puts(" 실패하면 EOF 를 리턴 한다. ");
	return 0;
}
