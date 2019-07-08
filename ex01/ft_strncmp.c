/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 19:09:51 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/08 19:25:42 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int diff;
	int loop_done;
	
	if (n == 0)
		return (0);
	i = 0;
	loop_done = 0;
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s2 == '\0')
		return (1);
	else if (*s1 == '\0')
		return (-1);
	while (s1[i] != '\0' && loop_done == 0 && i < n)
	{
		if (s2[i] == '\0')
		{
			loop_done = 1;
			return (-1);
		}
		diff = s1[i] - s2[i];
		if (diff != 0)
		{
			loop_done = 1;
			return (diff);
		}
		if (s1[i + 1] == '\0')
		{
			loop_done = 1;
			if (s2[i + 1] == '\0')
				return (0);
			else
				return (-1);
		}
		i++;
	}
	return (0);
}
