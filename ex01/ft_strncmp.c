/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 19:09:51 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/10 11:45:21 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cmp_char(char *s1, char *s2, int i, int *loop_done)
{
	int diff;

	if (s2[i] == '\0')
	{
		*loop_done = 1;
		return (1);
	}
	diff = s1[i] - s2[i];
	if (diff != 0)
	{
		*loop_done = 1;
		return (diff);
	}
	if (s1[i + 1] == '\0')
	{
		*loop_done = 1;
		if (s2[i + 1] == '\0')
			return (0);
		else
			return (-1);
	}
	return (0);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				done;
	int				*loop_done;
	int				result;

	if (n == 0)
		return (0);
	i = 0;
	done = 0;
	loop_done = &done;
	if (*s1 == '\0' && *s2 != '\0')
		return (-1);
	while (s1[i] != '\0' && *loop_done == 0 && i < n)
	{
		result = cmp_char(s1, s2, i, loop_done);
		if (*loop_done == 1)
			return (result);
		i++;
	}
	return (0);
}
