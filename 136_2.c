#include <stdio.h>

int main(void)
{
	int a,b;
	fputs(" scanf 정수 2개 ",stdout);
	fprintf(stderr, "첫 번째 정수 입력 : \n");
	fscanf(stdin, "%d", &a);
	fprintf(stdout, " 두번째정수 입력: \n");
	fscanf(stdin, "%d",&b);
	fprintf(stderr, "a = %d , b = %d \n", a,b);

	fputs(" 연속 2개를 입력 받을 떄는 따로 받는게 좋음 ",stdout);
	return 0;
}
