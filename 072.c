#include <stdio.h>
#include <string.h>

int main(void)
{
	char g[] = "google";
	// char g[7] = {g,o,o,g,l,e,\0};
	int i, n = sizeof(g) / sizeof(char);

	puts("--------------------");
	puts(" * 문자 배열 개념 * ");
	puts("--------------------");

	printf("%s, g =%d byte \n", g, sizeof(g));
	puts("--------------------");
	for (i = 0; i<n; i++)
		printf(" g[%d] = %c, &g[%d]= %d \n", i,g[i],i,&g[i]);
	puts("---------------------");

	puts(" 문자열의 끝에 NULL 문자를 자동으로 추가");
	puts(" NULL 문자는 문자열의 끝을 가리킴");
	puts(" 6,7번 라인은 같은 의미임");

	return 0;
}
