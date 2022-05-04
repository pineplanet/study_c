#include <stdio.h>

int main(void)
{
	char city[5][20];
	int i,n;
	n = sizeof(city)/sizeof(char[20]);

	printf("[%d]개의 도시명 입력 \n",n);

	for (i = 0; i<n; i++){
		printf("[%d]번째도시명: ",i);
		gets(city[i]);
	}

	printf("\n *[%d] 개의 도시명 출력 * \n",n);
	
	for (i = 0; i<n; i++)
	{
		printf("city[%d] = %s시 \n",i,city[i]);
	}
	puts("char[20]가 5개 모인 2차원 배열");

	return 0;
}
