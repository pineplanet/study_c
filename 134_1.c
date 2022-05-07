#include <stdio.h>
int main(void)
{
	char b_type;
	fputs(" fgetc 함수 ",stdout);
	fprintf( stdout, " 당신의 혈액형은: " );
	b_type = getchar();
	fprintf(stderr, "\n %c형이군요. 반갑습니다 \n", b_type);
	fputs("\n -----------------------------------------\n",stdout);
	fputs(" 이미 알고있는 getchar 함수 입니다.",stdout);

	return 0;
}
