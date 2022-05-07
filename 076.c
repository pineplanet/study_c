#include <stdio.h>
#include <string.h>

int main(void)
{
	char k[5] = "kbs", m[5] = "mbc";
	char tmp[5];

	puts("-------------------------");
	puts(" * 문자열의 맞교환 * ");
	puts("-------------------------");

	puts(" * 교환전 * ");
	puts("-------------------------");

	printf("k = %s \n", k);
	printf("m = %s \n\n",m );

	strcpy(tmp, k);
	strcpy(k,m);
	strcpy(m, tmp);

	puts(" *교환 후 * ");
	printf(" k = %s \n" , k );
	printf("m = %s \n", m);

	puts(" 배열 명은 변수가 아니다. 값을 대입할 수 없다");
	puts(" 문자열 복사 (strcpy) 전용 함수를 사용한다");

	return 0;

}
