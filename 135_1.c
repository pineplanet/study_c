#include <stdio.h>

int main(void)
{
	char it[20];
	fputs(" * fgets ",stdout);
	fprintf(stderr, "근무하고 싶은 it 회사는  : \n");
	gets(it);
	fprintf(stderr, "\n %s. 저도 그 회사 가고 싶어요 \n", it );

	fputs(" gets 함수 복습",stdout);
	return 0;
}
