/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 17:34:02 by rpunet            #+#    #+#             */
/*   Updated: 2020/07/27 16:57:42 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS
# define GET_NEXT_LINE_BONUS

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define FD_MAX 4096

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 8
#endif

int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
// char	*ft_strnew(size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);

#endif