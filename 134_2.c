#include <stdio.h>

int main(void)
{
	char b_type;
	fputs(" * fgetc ", stdout);

	fprintf(stderr, "당신의 혈액형은? \n");
	b_type = fgetc(stdin);

	fprintf(stderr, "\n %c 형이군요. 반갑습니다. \n", b_type);

	
	return 0;
}
