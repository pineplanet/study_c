/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   108.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:38:34 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/07 13:47:38 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	int num1, num2;
	char op;

	puts(" ------------------");
	puts(" 간단한 계산기");
	puts(" ------------------");

	printf("첫 번째 수 : ");
	scanf("%d", &num1);
	printf("[ +,-,*,/ ]");
	fflush( stdin);
	op = getchar();
	
	printf(" 두번째 수 :");
	scanf("%d",&num2);

	if (op == '+') {
		printf(" %d + %d = %d\n", num1, num2, num1+num2);
	}
	else if (op == '-') {
		printf("%d - %d = %d\n", num1, num2, num1-num2);
	}
	else if (op == '*') {
		printf("%d * %d = %d\n", num1, num2,num1*num2);
	}
	else if (op == '/') {
		printf("%d / %d = %d\n", num1, num2, num1/num2);
	}
	else
		printf(" %c 그런 연산자는 없습니다. \n", op);
	
	puts(" 천천히 반복 실습 ");
	return 0;
}
