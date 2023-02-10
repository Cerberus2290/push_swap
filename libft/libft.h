/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:53:09 by tstrassb          #+#    #+#             */
/*   Updated: 2023/02/09 09:34:40 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>

typedef struct s_split_next
{
	size_t	start;
	size_t	length;
}	t_split_next;

typedef struct s_list
{
	long int		content;
	struct s_list	*next;
	int				index;
	int				flag;
}	t_list;

void			*ft_calloc(size_t elementCount, size_t elementSize);

void			ft_bzero(void *s, size_t n);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);

int				ft_strcmp(char *s1, char *s2);

size_t			ft_strlen(const char *s);

int				ft_isdigit(int c);

long			ft_atol(const char *str);

char			**ft_split(char const *s, char c);

void			ft_putstr_fd(char	*s, int fd);

void			ft_putchar_fd(char c, int fd);

t_list			*ft_lstnew(int content);

long int		ft_lstsize(t_list *lst);

t_list			*ft_lstlast(t_list *lst);

void			ft_lstadd_back(t_list **lst, t_list *new);

void			ft_lstclear(t_list **lst);

void			*ft_memmove(void *dst, const void *src, size_t len);

#endif
