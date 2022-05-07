#include <stdio.h>

int main(void)
{
	puts("fputc ");

	putchar('A');
	putchar('B');
	putchar('C');
	putchar('\n');

	fputc('A',stdout);
	fputc('B',stdout);
	fputc('C',stdout);

	putchar(97);
	putchar(98);
	putchar(99);

	putchar('\n');
	
	fputc(97,stdout);
	fputc(98,stdout);
	fputc(99,stdout);
	
	puts("stdout 은 표준 출력을 의미 ");
	puts("standard output 모니터를 나타냄 ");
	puts(" 어느곳에 출력할 지를 지정해줘야 함 ");
	puts(" 정수와 문자가 같다는 것 복습 ");
	return 0;
}
