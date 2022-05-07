#include <stdio.h>

int main(void)
{
	int i,j;
	puts("----------------------");
	puts(" * 별 찍기 -1 ");
	puts("----------------------");
	
	for (i =0 ; i<5; i++) {
		
		for (j=0; j<5; j++) {
			
			printf(" * ");
		} /* for (j=0; j<5; j++) */
		putchar('\n');
	} /* for (i =0 ; i<5; i++) */
	puts(" ----------------------");
	puts(" 열을 제어하는 i");
	puts(" 행을 제어하는 j");
	puts(" ----------------------");
	return 0;
}
