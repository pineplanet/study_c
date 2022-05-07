#include <stdio.h>

int main(void)
{
	int age; 
	int a,b;
	puts(" * scanf *");
	printf("몇살이세요 ? \n");

	printf(" %d 살 , 동갑 이네요 \n",age);

	printf("정수 2개 입력 : \n");
	scanf("%d %d",&a,&b);
	printf("a = %d , b = %d \n", a, b);	

	puts(" ----------------------------------------");
	puts(" 연속 2개를 입력 받을 때는 엔터, 탭, 스페이스로 구분 ");

	return 0;
}
