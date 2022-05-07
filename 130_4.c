#include <stdio.h>

int main(void)
{
	puts(" * printf 문자열");

	printf(" 문자열 %s , %s \n", "korea", "대한민국 ");
	printf(" 문자열 %%d ==> %s, %s \n", "korea","대한민국 " );


	puts(" %s ==> string");
	printf("문자열을 %%d 로 출력 하면 주소가 나온다. \n");

	printf("주소에 관해서는 포인터 이후에 공부한다. \n");
	
	return 0;

}
