/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larzuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:40:43 by larzuman          #+#    #+#             */
/*   Updated: 2021/02/07 18:07:26 by larzuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isascii(int	c);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t num, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					length(int n);
void				*ft_memccpy(void *dst, void *src, int ch, size_t length);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2,
					size_t length);
void				*ft_memcpy(void *dst, const void *src, size_t length);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *str, int ch, size_t length);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				**ft_split(char	const *s, char c);
char				*ft_strchr(const char *str, int ch);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const	char *str);
char				*ft_strjoin(char const *s1, char const *s2);
unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlen(const	char *str);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(char *str1, char *str2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
char				*ft_itoa(int n);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list	*lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
