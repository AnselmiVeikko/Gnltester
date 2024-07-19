/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:31:32 by ahentton          #+#    #+#             */
/*   Updated: 2024/07/19 14:14:03 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    char	*line;
    int fd1=open("bible.txt", O_RDONLY);
    int fd2=open("longline_no_nl.txt", O_RDONLY);
    int	fd3=open("5xnl.txt", O_RDONLY);
    int	fd4=open("1char.txt", O_RDONLY);
    int	fd5=open("1char_nl.txt", O_RDONLY);

    while (1)
    {
	line = get_next_line(fd2);
	if (line == NULL)
		break;
	printf("[LONGLINE_NO_NL]: %s", line);
    }
    while (1)
    {
	line = get_next_line(fd3);
        if (line == NULL)
                break;
        printf("[5XNL]: %s", line);
    }
    while (1)
    {
	line = get_next_line(fd4);
        if (line == NULL)
                break;
        printf("[1CHAR]: %s", line);
    }
    while (1)
    {
	line = get_next_line(fd5);
        if (line == NULL)
                break;
        printf("[1CHAR_NL]: %s", line);
    }
}
