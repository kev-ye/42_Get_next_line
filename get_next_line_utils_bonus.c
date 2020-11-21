/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:44:50 by kaye              #+#    #+#             */
/*   Updated: 2020/11/21 01:23:19 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t		ft_strlen(const char *s)
{
	const char *str;

	str = s;
	while (*str)
		++str;
	return (str - s);
}

char		*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	*str = '\0';
	return (str - len);
}

char		*ft_strjoin_gnl(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
		*str++ = s1[i++];
	i = 0;
	while (s2[i])
		*str++ = s2[i++];
	*str = '\0';
	free((char *)s1);
	return (str - len);
}

t_set		*ft_lstnew(void)
{
	t_set *new;

	if ((new = (t_set *)malloc(sizeof(t_set))))
	{
		new->fd = 0;
		new->str = NULL;
		new->next = NULL;
	}
	return (new);
}

void		ft_lstadd_front(t_set **alst, t_set *new)
{
	if (*alst)
		new->next = *alst;
	*alst = new;
}
