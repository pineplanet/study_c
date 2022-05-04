#include <stdio.h>

int main(void)
{
	int i;
	float sum  = 0.0;

	puts("--------------------------");
	puts(" * float *");
	puts("--------------------------");

	for (i=0; i<100;i++)
	{
		sum = sum+1.7f;
	}
	printf(" float sum =%f \n",sum);
	puts("------------------------");

	puts("소숫점 2자리 까지만 출력 ");
	printf(" float sum = %.2f \n",sum);
	puts("---------------------------");
	puts("169.999832 이것은 CPU의 한계 이다.");
	puts("소수점 2자리까지만 출력할 때는 반올림한다.");

	return 0;
}
