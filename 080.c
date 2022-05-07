#include <stdio.h>

int main(void)
{
	int i,j;
	int a[2][3] = {{10,20,30}, {40,50,60}};
	
	puts("-----------------------------¬");
	puts(" * 정수 2차원 배열 * ");
	puts("-----------------------------¬");

	printf("a= %d, size= %d byte\n", a, sizeof(a));
	puts("------------------------------");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("a[%d][%d] = %d , addr= %d\n", i,j,a[i][j],&a[i][j]);
		}
		printf("\t\t a[%d] = %d\n\n", i,a[i]);
		puts(" ---------------------------------");

	}

	puts(" 배열 명은 시작 주소를 갖는 상수 ");
	puts(" 동일한 것을 모아 놓은 게 배열 ");
	puts(" 배열의 배열 ==> 2차원 배열 ");
	return 0;
}
