/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busras3v3n@proton.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:58:34 by busseven          #+#    #+#             */
/*   Updated: 2024/07/15 14:00:05 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tolowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalized;

	capitalized = 0;
	ft_tolowercase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (capitalized == 0)
				str[i] -= 32;
			capitalized = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capitalized = 1;
		else
			capitalized = 0;
		i++;
	}
	return (str);
}
