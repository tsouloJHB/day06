/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:10:41 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/26 15:34:21 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void  ft_putchar(char c)
{
  write(1,&c,1);
}

void ft_putstr(char *str)
{
    int i;

	i = 0;

	while(str[i] != '\0')
	{
     ft_putchar(str[i]);
	 i++;
	}
}
int main(int argc,char **argv)
{
	if(argc == 1)
		ft_putstr(argv[0]);
    ft_putchar('\n');
    return 0;	
}
