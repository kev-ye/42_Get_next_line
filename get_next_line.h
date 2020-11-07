/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:11:00 by kaye              #+#    #+#             */
/*   Updated: 2020/11/07 16:46:03 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_set
{
	int				fd;
	char			*str;
	struct s_set	*next;
}				t_set;

t_set			*ft_lstnew(void);
void			ft_lstadd_front(t_set **alst, t_set *new);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
int				get_next_line(int fd, char **line);

#endif