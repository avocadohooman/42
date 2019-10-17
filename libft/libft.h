/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 09:31:50 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/16 18:30:46 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h> //REMOVE BEFORE SUBMISSION
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		ft_atoi(const char *str);
int		ft_strlen(char *str);
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, unsigned int n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, unsigned int n);
char	*ft_strlcat(char *s1, const char *s2, unsigned int len);
char	*ft_strstr(char *haystack, char *needle);
char	*ft_strnstr(char *haystack, char *needle, unsigned int n);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif