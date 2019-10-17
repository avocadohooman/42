/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 09:41:39 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/16 19:09:13 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <ctype.h>

int main()
{
	char str[50] = "Hello ";
	char dst[20] = "World";
	//char *needle = "Hellu"; 
	unsigned int n = 1;
	//char is = '!';
	//int isasciii = 127;

	//printf("ft_atoi test: %d\n", ft_atoi(str)); // Testing ft_atoi
	//printf("ft_strlentest: %d\n", ft_strlen(str)); // Testing ft_strlen
	//printf("ft_strdup test: %s\n", ft_strdup(str)); // Testing ft_strdup
	//printf("ft_strcpy test: %s\n", ft_strcpy(dst, str)); // Testing ft_strcpy
	//printf("ft_strncpy test: %s\n", ft_strncpy(dst, str, n)); // Testing ft_strncpy
	//printf("ft_strcat test: %s\n", ft_strcat(str, dst)); // Testing ft_strcat
	//printf("ft_strncat test: %s\n", ft_strncat(str, dst, n)); // Testing ft_strncat
	printf("ft_strlcat test: %s\n", ft_strlcat(str, dst, n)); // Testing ft_strlcat
	//printf("ft_strstr test: %s\n", ft_strstr(str, needle)); // Testing ft_strstr
	//printf("ft_strnstr test: %s\n", ft_strnstr(str, needle, n)); // Testing ft_strnstr
	//printf("ft_strncmp test: %d\n", ft_strncmp(str, needle, n)); // Testing ft_strncmp
	//printf("ft_strcmp test: %d\n", ft_strcmp(str, needle)); // Testing ft_strcmp
	//printf("ft_isalpha test: %d\n", ft_isalpha(isalpha)); // Testing ft_isalpha	
	//printf("ft_isdigit test: %d\n", ft_isdigit(is)); // Testing ft_isdigit
	//printf("ft_isalnum test: %d\n", ft_isalnum(is)); // Testing ft_isalnum
	//printf("ft_isascii test: %d\n", ft_isascii(isasciii)); // Testing ft_isascii
	//printf("ft_isprint test: %d\n", ft_isprint(isasciii)); // Testing ft_isprint
	//printf("ft_toupper test: %c\n", ft_toupper(is)); // Testing ft_toupper
	//printf("ft_tolower test: %c\n", ft_tolower(is)); // Testing ft_toupper
	
	return (0);
}
