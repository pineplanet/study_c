/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   101.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:38:18 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/06 15:48:04 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int score;
	puts("--------------------------");
	puts(" * 다중 if 문 ");
	puts("--------------------------");
	do {
		printf("Enter score : ");
		scanf("%d", &score);
	} while (score>100 || score < 0);

	if (score > 90) {
		printf("score : %d, 수 \n", score);
	}
	else if (score > 80) {
		printf("score : %d, 우\n", score);
	}
	else if (score > 70) {
		printf(", score: %d, 미\n", score);
	}
	else if (score > 60) {
		printf("score: %d, 양\n",score);
	}
	else {
		printf("score : %d, 가 \n", score);
	}
	puts(" ---------------------------------");
	puts(" 아래로 갈 수록 깔때기 처럼 범위가 좁아진다.");
	puts(" 참 거짓을 구분하고 다시 거짓을 가지고 반복한다.");
	return 0;
}

