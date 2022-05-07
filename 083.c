#include <stdio.h>
#include <string.h>

int main(void)
{
	char town[5][10];
	char tmp[10];
	int i,j,n;
	n = sizeof(town) / sizeof(char[10]);
	
	puts("--------------------------------------");
	puts("* 문자열 정렬 * ");
	puts("--------------------------------------");
	
	//1. 입력 
	printf("살고 싶은 동네 [%d] 개동 입력\n", n);
	puts("--------------------------------------");
	for (int i = 0; i < n; ++i) {
		printf("[%d]번째 동 이름: \n", i);
		fflush(stdin);
		gets(town[i]);
	}
	//2. 원본 출력 
	puts("\n 원본 출력");
	for (i=0; i<n; i++) {
		
		printf(" town[%d] ==> %s\n",i,town[i]);
	} /* for (i=0; i<n; i++) */
	//3. 거품 정렬 
	for (i = 0; i < n-1; ++i) {
		for (j = 0; j < n-1-i; ++j) {
			if (strcmp(town[j],town[j+1]) > 0) {
				strcpy(tmp,town[j]);
				strcpy(town[j],town[j+1]);
				strcpy(town[j+1], tmp);
			}
		}
	}
	//4. 정렬 후 출력 
	puts("\n ** 정렬 후 출력 **");
	for (i = 0; i < n; ++i) {
		printf("town[%d] ==> %s \n", i, town[i]);
	}
	puts("---------------------------");
	
	return 0;
}
