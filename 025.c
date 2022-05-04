#include <stdio.h>

int main(void)
{
	char city[5][20];
	int i,n;
	n = sizeof(city)/sizeof(char[20]);

	puts("--------------------------");
	puts("** 문자열 배열 입출력");
	puts("--------------------------");

	for (i=0;i<n;i++)
	{
		printf(" [%d] 번째 도시명 : ",i);
		gets(city[i]);
	}
	printf("\n *[%d] 개의 도시명 출력 * \n",n);
	puts("--------------------------");
	for (i=0;i<n;i++)
		printf(" city[%d] = %s 시 * \n",i,city[i]);
		
	puts("--------------------------");
	puts("char[20]개가 5개 모인 2차원 배열.");
	puts("--------------------------");
	
	return 0;
}
