#include <stdio.h>;

int main(void)
{
	int i,j;

	puts("--------------------------");
	puts(" * 이중 for 문 ");
	puts("--------------------------");

	for (int i = 0; i < 3; i++) {
		for (int j= 0; j < 4; j++) {
			printf("i = %d, j = %d, (안쪽for 문)\n",i,j);
		}
		printf(" i =%d, j= %d (바깥쪽 for 문)\n", i,j);
		puts("------------------------------------------");
	}
	puts("천천히 도는 것은 바깥쪽 루프");
	puts("빨리 도는 것은 안쪽 루프");
	puts("i와 j의 변화를 잘 보세요 ");


	return 0;
}
