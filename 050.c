#include <stdio.h>

int main(void)
{
	int a[] = {65,25,45,35,55};
	int i,j,n,tmp;
	n = sizeof(a) / sizeof(int);

	puts("----------------------");
	puts(" * 정수 정렬 * ");
	puts("----------------------");

	//1. 원본 출력 
	puts(" ** 원본 출력 ** ");
	for (i =0; i<n; i++)
		printf(" a[%d] = %d \n", i,a[i]);

	//2. 선택 정렬 
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j<n;j++)
		{
			if (a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	// 3. 정렬 후 출력 
	puts(" ** 정렬 후  출력 ** ");
	for (i =0; i<n; i++)
		printf(" a[%d] = %d \n", i,a[i]);
	puts("-----------------------------");
	puts("비교의 방향에 따라 내림차순, 오름차순 변경");
	puts("-----------------------------");

	return 0;
}
