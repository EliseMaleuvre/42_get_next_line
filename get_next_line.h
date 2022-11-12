/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaleuv <elmaleuv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:27:34 by elmaleuv          #+#    #+#             */
/*   Updated: 2022/09/06 15:11:36 by elmaleuv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin(char *s1, char *s2);
char	*get_line(char *storage);
char	*save_line(char *storage);
char	*line_reader(int fd, char *storage);
char	*get_next_line(int fd);
int		find_the_n(char *storage);
int		ft_strlen(const char *str);

#endif
