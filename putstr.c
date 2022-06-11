/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggul_jam <ggul_jam@icloud.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:42:13 by ggul_jam          #+#    #+#             */
/*   Updated: 2022/05/27 11:51:39 by ggul_jam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_len_str(char *str)
{
	int	index;

	if (str == NULL)
		return 0;
	index = 0;
	while (*str != '\0')
	{
		index ++;
		str ++;
	}
	return (index);
}

void ft_putstr(char *str)
{
	int len;

	len = ft_len_str(str);
	write(1, str, len);
}

int main(void)
{
	char a [] = "12345";

	ft_putstr(a);
	return 0;
}
