#include <stdio.h>

int main(void)
{
	char city[5][10]={"부산","대구","창원","목포","여수"};
	int i,n; 
	n = sizeof(city)/ sizeof(char[10]);

	puts(" --------------------------------");
	puts(" * 문자열의 초기화 *");
	puts("---------------------------------");

	for (i = 0; i<n ; i++)
		printf(" city[%d] = %s \b",i,city[i]);
	puts("배열의 배열, 2차원 배열 입니다.");
	puts("-------------------------------");

	return 0;
}
