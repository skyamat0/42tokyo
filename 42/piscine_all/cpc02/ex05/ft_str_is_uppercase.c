int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ('A' <= *str && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}
