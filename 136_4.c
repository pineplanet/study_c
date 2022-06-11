#include <stdio.h>

int main(void)
{
	char flower[20];

	fprintf(stderr, "좋아하는 꽃은 ? \n");

	fscanf(stdin, "%s",flower);

	fprintf(stdout, "%s 저도 좋아요 \n",flower);

	fputs(" fscanf - %s 는 공백을 만나면 입력 종료 \n",stdout);
	fputs(" fgets - 엔터 만나면 입력 종료 \n",stdout);
	fputs(" 문자열 입력은 fgets 권장 ",stdout);

	return 0;
}
