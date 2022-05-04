#include <stdio.h>
#include <string.h>

int main(void)
{
	puts("----------------------");
	puts(" * 문자열의 비교 * ");

	puts( " ------------------------\n");

	printf("AA:AA = %d 같다. \n",strcmp("AD","AA"));
	printf("AB:AA = %d 크다. \n",strcmp("AA","AA"));
	printf("AA:AB = %d 작다. \n",strcmp("AA","AD"));

	printf("코딩: 코딩 = %d \n", strcmp("코딩","코딩"));
	printf("서울: 부산 = %d \n", strcmp("서울","부산"));
	printf("부산: 서울 = %d \n", strcmp("부산","서울"));

	puts("문자열은 주소다. 주소를 비교할 수 없으니 전용함수가 있다");
	puts(" 같으면 0, 좌측이 크면 1, 작으면 -1");

	return 0;
}
