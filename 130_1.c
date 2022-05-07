#include <stdio.h>
int main(void)
{
	puts(" printf 정수 ");

	printf(" 십진수 %d, %d,%d \n",100,200,300);
	
	printf("8 진수 %o, %o, %o \n", 10, 11, 30);

	printf("16 진수 %x, %x, %x \n", 15,16, 17);
	printf("16 진수 %X, %X, %x \n", 15, 16, 17);

	puts(" %d - decimal ");
	puts(" %o - octal 8 ");
	puts(" %x - hexa 16");
	puts(" 출력 결과 옆에 놓고 비교하세요 ");
	return 0;
}
