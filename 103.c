/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   103.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:55:43 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/06 18:57:42 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int	i;

	puts("---------------------------------");
	puts("* continue 문 * ");
	
	for (i=0; i<10; i++) {
		
		if (i == 5) {
			break;
		}
		printf("C 언어는 재밌다 : %d\n", i);
	} /* for (i=0; i<10; i++) */
	puts(" 조건이 참이 되면 블럭을 탈출");
	puts(" continue 문과 비교하여 이해 하자.");
	return 0;
}
