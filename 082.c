#include <stdio.h>

int main(void)
{
	int salary[5];
	int i,j,n,tmp;

	n = sizeof(salary) /sizeof(int);

	puts("------------------------------------");
	puts("* 정수 정렬 * ");
	puts("------------------------------------");

	//1. 입력
	printf("*[%d]명의 연봉 입력\n",n);
	puts("------------------------------------");

	for (i=0; i<n; i++) {
		
		printf("salary[%d] = %d만원 \n",i,salary[i]);
	} /* for (i=0; i<n; i++) */
	//2. 원본 출력
	puts(" ** 원본 출력 ** ");
	for (int i = 0; i<n; i++) {
		printf("salary[%d] = %d만원 \n", i,salary[i]);
	}
	puts("--------------------------------------------");
	//3. 선택 정렬(selection sort)
	for (int i = 0; i < n; ++i) {
		for (j=i+1; j<n; j++) {
			
			if (salary[i] > salary[j]) {
				tmp = salary[i];
				salary[i]= salary[j];
				salary[j] = tmp;
			}
		} /* for (j=i+1; j<n; j++) */
	}
	//4. 정렬 후 출력 
	puts("** 정렬 후 출력 **");

	for (int i = 0; i <n; ++i) {
		printf("salary[%d] = %d만원\n",i,salary[i]);
	}
	puts(" -------------------------------------");
	puts("원본 출력 에러나면 넘어가지 마세요");
	return 0;
}
