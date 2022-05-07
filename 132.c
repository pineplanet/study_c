#include <stdio.h>
int main(void)
{
	puts(" fputs ");

	fputs("삶은 속도가 아니라 방향이다 \n",stdout);
	fputs("인생은 성적순이 아니다 \n",stdout);
	fputs("빌게이츠, 스티브잡스, 주커버거 모두 대학 중퇴자다 \n",stdout);

	puts(" stdout 은 표준출력을 의미 ");
	puts(" fputs는 출력 이름을 지정해야 함");
	puts(" fputs 함수는 자동 줄바꿈이 안됨 ");
	return 0;
}
