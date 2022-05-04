#include <stdio.h>

int main(void)
{
	int ani[5] = {72000, 4500,8500,9000,3500};
	int i,j,tmp;
	int n = sizeof(ani) /sizeof(int);

	puts("------------");
	puts(" * 정수 정렬");
	puts("------------");
	
	//1. 원본 출력 
	puts("------------");
	puts(" * 원본 출력");

	for (i = 0; i <n; i++)
		printf(" ani[%d] = %d \n", i, ani[i]);
	//2. 선택정렬(selection sort)
	for (i = 0; i<n-1; i++)
	{
		for (j = i+1; j<n;j++)
			if (ani[i]>ani[j])
			{
				tmp = ani[i];
				ani[i] = ani[j];
				ani[j] = tmp;
			}
	}
	//3. 정렬 후 출력 - 올림차순
	puts("\n * 올림차순 *");
	puts("---------------");
	for (i = 0; i<n; i++)
		printf("ani[%d] = %d \n", i,ani[i]);
	puts("----------------");


	//4. 거품 정렬 
	for (i = 0; i<n ; i++)
	{
		for (j= 0; j < n-1-i; j++)
		{
			if (ani[j] <ani[j+1])
			{
				tmp =  ani[j];
				ani[j] = ani[j+1];
				ani[j+1] = tmp;
			}
		}
	}

	//5. 정렬 후 출력 - 내립차순 
	puts("\n 내림차순 *");
	puts("-------------");
	for (i = 0; i<n; i++)
		printf(" ani[%d] = %d \n", i, ani[i]);
	puts("-------------");
	puts(" 비교의 방향에 따라 내림차순 오름차순 변경");

	return 0;








	
}
