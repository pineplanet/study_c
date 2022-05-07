#include <stdio.h>

int main(void)
{
	char it[20];
	fputs(" *fgets ",stdout);
	fprintf(stdout,"근무하고 싶은 it 회사는 : ");

	fgets(it, sizeof(it),stdin);
	fprintf(stdout,"\n %s. 저도 그 회사 가고 싶어용 \n", it );

	fputs("fgets 함수 사용 ",stdout);
	return 0;
}
