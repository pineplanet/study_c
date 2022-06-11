#include <stdio.h>

int main(void)
{
	int age;
	fputs(" fscanf 함수 - 정수 \n",stdout);
	fprintf(stderr, "몇살 이세요? ");
	fscanf(stdin, "%d",&age);
	fprintf(stderr, "%d 살, 동갑이네요 \n", age);

	fputs("scanf 함수는 여러 형식 입력 함수\n",stdout);
	fputs(" 정수 , 실수, 문자, 문자열 모두 입력 가능 \n",stdout);
	
	
	return 0;
}
