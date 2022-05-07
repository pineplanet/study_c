/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   109.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:48:14 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/07 13:54:23 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int num1, num2;
	char op;

	puts(" -------------------------");
	puts("  * 간단한 계산기 *");
	puts(" -------------------------");

	printf(" 첫 번째 수 : ");
	scanf("%d", &num1);

	printf(" [+,-,*,/]");
	fflush(stdin);
	op = getchar();

	printf(" 두번 째 수 \n");
	scanf("%d", &num2);

	switch (op) {
		case '+':
			printf("%d + %d = %d \n", num1, num2, num1+num2);
			break;
		case '-':
			printf("%d - %d = %d \n", num1, num2, num1-num2);
			break;

		case '*':
			printf("%d * %d = %d \n", num1, num2, num1*num2);
			break;
		case '/':
			printf("%d / %d = %d \n", num1, num2, num1/num2);
			break;
		default:
			printf(" %c 그런 연산자는 없습니다. \a\a\n",op);
			
	}
	puts(" 다중 if문과 비교하여 보고, 어떤 문장이 더좋겠는지 고민");
	return 0;
}
