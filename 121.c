/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   121.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:35:49 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/07 15:41:59 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char flower[5][10];
	char tmp[10];
	int i,j,n;
	n = sizeof(flower)/sizeof(char[10]);

	//
	
	printf(", \t [%d ] 개의 꽃 이름 을 입력 하시오 \n", n);
	for (i =0 ; i<n ; i++) {
		
		printf(", [%d]번째 꽃 : \n", i);
		fflush(stdin);
		gets(flower[i]);
	} /* for (i =0 ; i<n ; i++) */
	puts(" ** 원본 데이터 **");
	for (i = 0; i<n; i++) {
		
		printf("flower[%d] = %s \n", i, flower[i]);

	} /* for (i = 0; i<n; i++) */
	for (i = 0 ; i<n-1; i++) {
		
		for (j=0; j<n-i-1; j++) {
			
			if (strcmp(flower[j], flower[j+1])>0) {
				
				strcpy( tmp, flower[j] );
				strcpy(flower[j], flower[j+1]);
				strcpy(flower[j+1],tmp);
			}
		} /* for (j=0; j<n-i-1; j++) */
	} /* for (i = 0 ; i<n-1; i++) */

	puts("** 정렬 된 데이터 ***");
	for (i=0; i<n; i++) {
		
		printf("flower[%d] = %s\n", i, flower[i]);
	} /* for (i=0; i<n; i++) */
	return 0;
}
