#include <stdio.h>

int main(void)
{
	char town[20];
	int bus;

	puts("-----------------------------");
	puts("정수와 문자열 입력");
	puts("-----------------------------");

	printf(" 무슨 동에 사세요?");
	gets(town  );
	printf(" 몇번 버스 타고 가세요?" );
	scanf("%d",&bus  );
	printf(" %s%d  \n",town,bus  );
	puts("-----------------------------");
	puts(" **town 은 배열명 이기에  &를 붙이지 않습니다.");
	puts("-----------------------------");

	return 0;	
}
