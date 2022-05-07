/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   111.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:06:42 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/07 14:17:23 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	enum week{SUN, MON,TUE,WED,THU,FRI,SAT};
	
	int number;
	while(1)
	{
		puts(" \t * 좋아하는 요일 * ");
		puts(" \t 0. 일요일 ");
		puts(" \t 1. 월요일 ");
		puts(" \t 2. 화요일 ");
		puts(" \t 3. 수요일 ");
		puts(" \t 4. 목요일 ");
		puts(" \t 5. 금요일 ");
		puts(" \t 6. 토요일 ");
		puts(" \t 선택하세요(종료 :9 )[		]\b\b\b");
		scanf("%d", &number);

		switch (number) {
			case SUN:
				printf(" %d ==> 일요일 \n", SUN);
				break;
			case MON:
				printf(" %d ==> 월요일 \n", MON);
				break;
			case TUE:
				printf(" %d ==> 화요일 \n", TUE);
				break;
			case WED:
				printf("%d ==> 수요일 \n", WED);
				break;
			case THU:
				printf("%d ==> 목요일\n", THU);
				break;
			case FRI:
				printf("%d ==> 금요일 \n", FRI);
				break;
			case SAT:
				printf("%d ==> 토요일 \n", SAT); 
				break;
			case 9:
				printf("%d 프로그램 종료 합니다 \n", number);
				return 1;
			default:
				printf("\t %d ==> 없는 요일 \n", number);	
				continue;
		}
	}
	return 0;
}
