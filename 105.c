/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   105.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:03:06 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/06 19:58:06 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	char k;
	puts("------------------------------------------");
	puts(" * sitch ~ case 문 * ");
	puts("------------------------------------------");

	while (1) {
		puts("\t ** MENU **");
		puts("\t 1.월요일 ");
		puts("\t 2.화요일");
		puts("\t 3.수요일");
		puts("\t 4.목요일");
		puts("\t 5.금요일");
		puts("\t 6.토요일");
		puts("\t 7.일요일");
		puts("\t 프로그램 종료 : Q");
		puts("\t 좋아하는 요일은 []\b\b\b");
		fflush(stdin);
		k = getchar();
		if ((k=='q')||(k =='Q')) {
			return 0;
		}
		switch (k) {
			case '1':
				printf("\t 월요일 \n");
				break;
			case '2':
				printf("\t 화요일 \n");
				break;
			case '3':
				printf("\t 수요일 \n");

				break;
			case '4':
				printf("\t 목요일 \n");
				break;
			case '5':
				printf("\t 금요일 \n");
				break;
			case '6':
				printf("\t 토요일 \n");
				break;
			case '7':
				printf("\t 일요일 \n");
				break;
			default:
				printf("\t 그런 요일 없어요 \n");
		}
	}

	puts("-------------------------------------");
	puts(" switch(k)에서 k가 case 값에 해당");
	puts("case 에 해당 되면 그 문장으로 바로 간다.");
	puts(" 해당 되는 case 가 없으면 default 이하 실행 ");
	
	return 0;
}
