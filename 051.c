#include <stdio.h>

int main(void)
{
	int score[5];
	int i,j,n, tmp;
	n = sizeof(score)/sizeof(int);

	puts("--------------------------");
	puts("* 정수 정렬 * ");
	puts("--------------------------");

	//1. 입력 
	printf(" * [%d] 명의 점수 입력 * \n",n);
	puts("-------------------------");
	for (i = 0; i<n; i++)
	{
		do{
			printf("[%d] 번째 점수입력 : ",i);
			scanf("%d", &score[i]);
		} while (score[i]<0 || score[i] > 100);
	}
	//2. 원본 출력 
	puts(" ** 원본 출력 **");
	for (i = 0; i<n; i++)
	{
		for (j = i+1; j<n; j++)
		{
			if (score[i] > score[j])
			{
				tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
	}
	// 4. 정렬 후 출력 
	puts("\n ** 정렬 후 출력 **");

	for (i = 0; i <n; i++)
		printf("score[%d] = %d \n", i, score[i]);
	puts("--------------------------------");
	puts("원본 출력에서 에러나면 넘어가지 말고 해결 하세요");
	puts("--------------------------------");
	return 0;
}
