#include <stdio.h>

int main(void)
{
	int a = 100;
	char b = 'K';

	puts(" * 주소 연산자 * ");

	printf("a = %d 주소는 %d \n", a, &a);
	printf("b = %c 주소는 %s\n", b, &b);

	puts(" &는 메모리상의 주소를 나타내는 연산자 입니다.");
	puts(" ampersand 엠퍼센트 라고 읽습니다.;");
	puts(" 주소는 컴퓨터 마다 일정하지 않아요.");
	puts(" 주소는 운영체제에 따라 달라지기도 합니다.");
	return 0;
}
