/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   110.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:55:46 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/07 14:03:43 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	int choice;

	puts(" \t *** MENU ***");
	puts(" \t 1. 공무원 ");
	puts(" \t 2. 회사원 ");
	puts(" \t 3. 자영업 ");
	puts(" \t 4. 여행가 ");
	puts(" \t 5. 빵집쥔 ");
	puts(" \t 6. 백수 ");
	printf("\t 희망 직업 [      ]\b\b\b\n");

	scanf("%d",&choice);
	switch (choice) {
		case 1:
			printf("\t ==> 공무원\n");
			break;
		case 2:
			printf("\t ==> 회사원\n");
			break;
		case 3: 
			printf("\t ==> 자영업\n");
			break;
		case 4: 
			printf("\t ==> 여행가\n");
			break;
		case 5:
			printf("\t ==> 빵집쥔\n");
			break;
		case 6:
			printf("\t ==> 백수 \n");
			break;
		default: 
			puts(" 아 나좀 내버려둬 !");
	}
	return 0;
}
