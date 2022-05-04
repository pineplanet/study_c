#include <stdio.h>

int main(void)
{
	int i ;
	double sum = 0.0;

	puts("---------------------------------");
	puts(" * double *");
	puts("---------------------------------");

	for (i=0; i<100; i++)
	{
		sum= sum +1.7;
	}

	printf(" double sum = %lf \n", sum);
	puts("---------------------------");

	puts(" 소수점 2자리 까지만 출력");
	printf(" double sum = %.2f \n",sum);
	puts("--------------------------");
	puts("정상이다. 4byte와 8byte의 차이다.");

	return 0;
}
