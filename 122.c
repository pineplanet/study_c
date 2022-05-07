#include <stdio.h>
#include <string.h>

struct Soccer {
	char player[20];
	char team[20];
	int ani;
};
typedef struct Soccer Soccer;

int main(void)
{
	int i,j,n;
	Soccer tmp;

	Soccer s[12] = {{"이영표","알 힐랄",35},
		{"이정수","알 사드",34},{"박지성","맨유",27},
		{"송종국","알 샤발",20},{"이청용","볼튼",6},
		{"이호","알아인",15},{"박주영","모나코",13},
		{"이근호","오사카",11},{"김남일","톰스크",10},
		{"곽태휘","퍼플상가",9},{"데인", "서울",14},
		{"설기현","포항",25}};
	
	n  = sizeof(s)/ sizeof(Soccer);
	
	puts(" [원본데이터 출력]");
	puts("번호 선수명 소속구단 연봉");

	for (i =0 ; i<n; i++) {
		
		printf("[%2d] %-8s %-10s %2d억원 \n",i+1, s[i].player, s[i].team, s[i].ani);

	} /* for (i =0 ; i<n; i++) */
	puts(" -----------------------------------------");
	// 선수 명 정렬 
	//
	for (i=0; i<n-1; i++) {
		
		for (j =i+1; j<n; j++) {
		
			if (strcmp(s[i].player,s[j].player)> 0) {
			
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;

			}
		} /* for (j =i+1; j<n; j++) */
	} /* for (i=0; i<n-1; i++) */

	puts(" [ 선수 이름 순 출력  ]");

	for (i=0; i<n; i++) {
		
		printf("[%2d] %-8s %-10s %2d억원 \n",i+1, s[i].player, s[i].team, s[i].ani);
	} /* for (i=0; i<n; i++) */
	//연봉순 정렬 
	for (i=0; i<n-1; i++) {
		
		for (j=i+1; j<n; j++) {
			
			if (s[i].ani < s[j].ani) {
				tmp = s[i];
				s[i]= s[j];
				s[j]= tmp;
			}
		} /* for (j=i+1; j<n; j++) */
	} /* for (i=0; i<n-1; i++) */
	puts(" 연봉 순 출력 ");
	for (i=0; i<n; i++) {
		
		printf("[%2d] %-8s %-10s %2d억원 \n",i+1, s[i].player, s[i].team, s[i].ani);
	} /* for (i=0; i<n; i++) */
	
	return 0;
}
