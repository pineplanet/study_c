#include <stdio.h>
int main(void)
{
	char country[20];
	puts(" gets함수 * ");

	printf(" 여행하고픈 나라는 : ");
	gets(country);
	printf("%s 함께 가요. \n",country);
	
	puts(" ----------------------------");
	puts(" gets 함수는 문자열 입력 전용 함수 ");
	puts(" 성공하면 저장된 번지를 가져와요");
	puts(" Enter 가 입력 될때 까지 받아요 ");
	puts(" Enter 를 만나면 NULL로 바꾸어 저장하지요");
	puts(" 실패하면 NULL 을 리턴 해요");
	return 0;
}
