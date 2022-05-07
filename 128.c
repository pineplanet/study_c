#include <stdio.h>

int main(void)
{
	char country[10];
	puts(" * fgets 함수 * ");
	printf("여행하고픈 나라는? \n");
	fgets(country,sizeof(country)-1,stdin);

	printf(" %s 함께 가요.\n", country);

	puts(" ------------------------------------");
	puts(" fgets함수는 문자열 입력 전용 함수 ");
	puts(" 배열 길이 보다 길게 입력을 해도 size 만큼만 읽어가요 ");
	puts(" 안정적이 된답니다");

	puts(" 실패하면 NULL 을 리턴 합니다");
	return 0;
}
