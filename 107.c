#include <stdio.h>
int main(void)
{
	int a;
	puts("-----------------------------------------");
	puts("* 다중 if 문 ");
	puts("-----------------------------------------");

	puts(" * TV 채널 선택 * ");
	puts(" \t 6. SBS ");
	puts(" \t 7. KBS2 ");
	puts(" \t 9. KBS ");
	puts(" \t 11. MBC ");
	puts(" \t 13. EBS ");
	puts(" \t *******");
	printf("즐겨보는 TV 채널 [ ]\b\b\b");
	scanf("%d",&a);
	
	if (a==6) {
		printf(" \t 선택 채널은 %d => SBS \n", a);
	}
	else if (a == 7) {
		printf("\t 선택 채널은 %d => KBS2 \n", a);
	}
	else if (a == 9) {
		printf("\t 선택 채널은 %d => KBS\n", a);
	}
	else if (a == 11) {
		printf("\t 선택 채널은 %d => MBC\n", a);
	}
	else if (a ==13) {
		printf("\t 선택 채널은 %d => EBS\n", a);
	}

	puts(" 같은 내용을 다중 if 문으로 변경");
	puts(" switch~case 문과 다중 if 문은 호환 되며 적절히 판단하여 사용");
	return 0;
}
