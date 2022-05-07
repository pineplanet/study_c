/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   120.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:26:40 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/07 15:35:15 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	int score[5], i, j,n,tmp;
	n = sizeof(score)/sizeof(int);

	//입력
	printf("[%d]명의 점수 입력 \n", i);
	for (i=0; i<n; i++) {
		
		printf("[%d] 번째 점수 :\n",i);
		scanf("%d",&score[i]);
	} /* for (i=0; i<n; i++) */

	//원본 출력 
	puts("\n ** 원본 출력 ");
	for (i=0; i<n-1; i++) {
		
		for (j=i+1; j<n; j++) {
			
			if (score[i]> score[j]) {
				tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		} /* for (j=0; j<n; j++) */
	} /* for (i=0; i<n-1; i++) */
	// 정렬 후 출력 
	
	puts(" \n **정렬 후 ** ");
	for (i = 0; i<n; i++) {
		
		printf("score[%d] ==> %d \n", i, score[i]);
	} /* for (i = 0; i<n; i++) */
	return 0;
}
