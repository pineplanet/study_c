#include <stdio.h>
int main(void)
{
	int i,j;

	for (i=0; i<5; i++) {
		
		for (j=5; j>=i+1; j--) {
			
			
			printf(" * ");
		} /* for (j=5; j>=i+1; j++) */
		printf("\n");
	} /* for (i=0; i<5; i++) */
	puts(" -------------------------");
	puts(" 행을 제어하는 i");
	puts(" 열을 제어하는 j");
	puts(" -------------------------");
	return 0;
}
