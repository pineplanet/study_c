/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   106.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:16:28 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/07 13:28:25 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	int a;
	puts(" -----------------------------------------");
	puts(" * switch - case 문 * ");
	puts(" -----------------------------------------");

	puts(" \t * tv 채널 선택 * ");
	puts(" \t\t 6. SBS");
	puts(" \t\t 7. KBS2");
	puts(" \t\t 9. KBS");
	puts(" \t\t 11. MBC");
	puts(" \t\t 13. EBS");
	puts(" \t\t ********");
	puts(" \t\t 즐겨 보는 TV 채널 [ ] \b\b\b");
	scanf("%d",&a);
	
	switch (a) {
		case 6:
			printf("\t채널은 %d == > SBS \n",a);
			break;
		case 7:
			printf("\t채널은 %d == > KBS2 \n",a);
			break;
		case 9:
			printf("\t채널은 %d == > KBS \n",a);
			break;
		case 11:
			printf("\t채널은 %d == > MBC \n",a);
			break;
		case 13:
			printf("\t채널은 %d == > EBS \n", a);
			break;
		default : printf("\t %d == > 없는 채널\n", a);
	}

	puts(" ------------------------------------");
	puts(" a 가 case 값에 해당 ");
	puts(" case 값에 해당 되면 그 문장으로 바로 간다.");
	puts(" 해당 되는 case 가 없으면 default 이하 실행 ");

	return 0;
}
