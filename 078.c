#include <stdio.h>
#include <string.h>

int main(void)
{
	char company[20], nation[20];

	puts("-----------------------------------");
	puts(" * 문자열의 입출력 * ");
	puts("-----------------------------------");

	printf("근무하고 싶은 회사는 ");
	gets(company);
	
	printf("여행하고 싶은 나라는: ");
	gets(nation);
	
	printf(" 회사 : %s, 국가 : %s \n", company, nation);

	puts(" scanf 함수는 공백을 만나면 입력 종료");
	puts(" 문자열 입력은 gets 를 추천합니다.");
	return 0;
}
