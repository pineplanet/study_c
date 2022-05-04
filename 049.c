#include <stdio.h>

int main(void)
{
	int a[] = {65, 25, 35, 55, 45};
	int i,j,n,tmp;
	n = sizeof(a) / sizeof(int);

	puts("-----------------------");
	puts(" * 정수 정렬 * ");
	puts("-----------------------");

	//1. 원본 출력
	puts(" ** 원본 출력 **");
	for (i =0 ; i<n; i++)
		printf(" a[%d] = %d \n", i, a[i]);
	//2.거품 정렬
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j<n -1 -i ; j++)
		{
			if (a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1]= tmp;
			}
		}
	}

	// 3. 정렬 후 출력 
	puts(" ** 정렬 후 출력 **");
	for (i = 0; i <n; i++)
		printf(" a[%d] = %d \n",i,a[i]);
	puts("-------------------------------");
	puts(" 뜻을 이해하려고 하지말고 결과만 확인하세요");
	puts("-------------------------------");

	return 0;
}
