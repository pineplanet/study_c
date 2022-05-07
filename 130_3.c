#include <stdio.h>

int main(void)
{
	puts(" printf - 문자 ");

	printf("문자 %c , %c \n", 'A', 'a');
	printf("정수 %d, %d\n", 65, 97);

	puts(" 문자와 정수는 서로 호환 된다.");
	puts(" 컴퓨터 내부에서는 65 가 저장 ");
	puts(" %c 이면 문자 출력, %d 면 정수 출력 ");

	return 0;
}
