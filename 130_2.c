#include <stdio.h>
int main(void)
{
	puts(" printf 함수 - 실수 ");

	printf("실수 %f %lf\n", 24.5678, 25.6789);
	printf("실수 %.2f %.1lf\n", 24.5678, 25.6789);
	printf("실수 %.2f %2.1lf\n", 24.5678, 25.6789);
	
	puts(" 실수는 기본 소수점 6자리 까지 ");
	puts(" %f - float 4 byte ");
	puts(" %lf - long float 8 byte");
	puts(" double이 d 가 아닌 것은 %d 를 10진수로 사용 ");

	puts(" %%8.2f 에서 8은 전체 자리수 2는 소수점 이하 자ㄹㅣ수 ");
	puts(" %%2.1f 에서 2는 무시, 중요한 수가 잘려 나가므로 ");
	return 0;
}
