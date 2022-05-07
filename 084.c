#include <stdio.h>
#include <string.h>
struct Tv
{
	char bcast[20];
	int chan;
};
typedef struct Tv Tv;

int main(void)
{
	Tv t[5] = {{"YTN",25},{"SBS",6},{"EBS",13}, {"MBC",11},{"KBS",9}};

	int i,j,n;

	Tv tmp;
	n = sizeof(t)/ sizeof(Tv);
	puts("----------------------------------------");
	puts(" * 구조체 정렬 *");
	puts("----------------------------------------");

	//1. 원본 출력 
	puts("-- 원본 출력 --");
	puts(" * TV * ");

	for (i = 0; i < n; ++i) {
		printf("[%d]번 %s ===> %2d번 \n",i+1,t[i].bcast,t[i].chan);
	}
	// 2. 방송국 순 정렬 
	for (int i = 0; i < n; ++i) {
		for (j=0; j<n-1-i; j++) {
			
			if (strcmp(t[j].bcast,t[j+1].bcast)) {
			
				tmp = t[j];
				t[j] = t[j+1];
				t[j+1] = tmp;
			}
		} /* for (j=0; j<n-1-i; j++) */
	}

	//3. 방송국 순 출력 
	puts(" ---- 방송국 순 ----");
	puts(" ** TV **");

	for (i =0 ; i<n; i++) {
		
		printf("[%d]번 %s ==> %2d번\n", i+1, t[i].bcast, t[i].chan);
	} /* for (i =0 ; i<n; i++) */
	// 4. 채널 순 정렬 
	for (i =0; i<n; i++) {
		
		for (j=0; j<n-1-i; j++) {
			
			if (t[j].chan > t[j+1].chan) {
				tmp = t[j];
				t[j] = t[j+1];
				t[j+1] =tmp;
			}
		} /* for (j=0; j<n-1-i; j++) */
	} /* for (i =0; i<n; i++) */
	// 5. 채널 순 출력 
	puts("-----채널순 출력");
	puts("----------------");
	for (i =0; i<n; i++) {
		
		printf("[%d]번 %s == > %2d번\n", i+1, t[i].bcast, t[i].chan);
	} /* for (i =0; i<n; i++) */
	return 0;
}
