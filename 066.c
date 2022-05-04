#include <stdio.h> 

int main(void)
{
	int i; 
	int a[5] = {100,200,300,400,500};
	int n = sizeof(a) / a[0];

	puts("--------------------");
	puts(" * 배열명은 변수가 아니다 * ");

	//a = 777;
	puts("---------------------");

	for (i = 0; i <n ; i++)
	{
		printf(" a[%d] = %2d, &a[%d] = %d \b", i, a[i],i,&a[i]);
	}
	puts("---------------------");
	puts(" 배열명은 변수가 아니다.");
	puts(" 배열명에는 값을 대입할 수 없다");

	return 0;
}
