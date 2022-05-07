#include <stdio.h>

int main(void)
{
	int i,j;
	puts("--------------------");
	puts("별찍기 -3 ");
	puts("--------------------");

	for (i = 5; i>0; i--) {
		
		for (j = 5; j> i-1; j--) {
			
			printf(" * ");
		} /* for (j = 5; j> i-1; j++) */
		printf("\n");
	} /* for (i = 5; i>0; i++) */
	puts(" --------------------");
	puts(" 행을 제어하는 i ");
	puts(" --------------------");

	return 0;
}
