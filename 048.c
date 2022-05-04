#include <stdio.h>

int main(void)
{
	int score[5];
	int i,n;
	n = sizeof(score) / sizeof(int);

	puts("------------------------");
	puts(" * 정수 배열의 입출력 * ");
	puts("------------------------");
	
	printf("[%d]명의 점수 입력",n);
	puts("----------------------");

	for (i=0;i<n; i++)
	{
		do{
			printf("[%d]번째 score입력: ",i);
			scanf("%d",&score[i]);
		} while(score[i]<0  || score[i]>100);
	}
	
	puts(" ** 출력 **");
	for (i = 0; i<n; i++)
		printf(" score[%d] = %d \n", i,score[i]);
	
	puts("------------------------");
	puts(" 0~100 사이만 정상 값으로 본다 ");
	puts("------------------------");

	return 0;

}
