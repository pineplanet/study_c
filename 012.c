#include <stdio.h>

int main(void)
{
	int a, b;
	puts("-----------------------");
	puts("** 정수 두 개 입력: ");
	puts("-----------------------");
	
	printf("정수 두개 입력:");
	scanf("%d %d",&a,&b);

	printf("a=%d,b=%d \n", a,b);
	puts("-----------------------");
	puts("엔터,탭, 스페이스 등으로 두 값을 구분합니다");
	puts("-----------------------");
	
	return 0;
}
