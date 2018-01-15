int		ft_atoi(const char *str)
{
	int					i;
	unsigned long int	result;
	int					sign;

	i = 0;
	result = 0;
	while ((str[i]) && (ft_isspace(str[i])))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		result = result * 10 + (str[i++] - '0');
	if (result > MAX && sign == 1)
		return (-1);
	else if (result > MIN && sign == -1)
		return (0);
	return (result * sign);
}
