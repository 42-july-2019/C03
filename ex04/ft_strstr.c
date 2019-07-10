/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:24:54 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/10 11:32:40 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*sub_str;
	char	*result;
	int		is_found;
	int		i;

	is_found = 0;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (is_found == 0 && *str != '\0')
	{
		sub_str = str;
		i = 0;
		while (sub_str[i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
			{
				result = sub_str;
				is_found = 1;
			}
			i++;
		}
		str++;
	}
	return (is_found ? result : 0);
}
