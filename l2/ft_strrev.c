void	ft_strrev(char **str)
{
	size_t	i;
	size_t	j;
	char	temp;
	char	*a;

	if (str == NULL || *str == NULL)
		return ;
	a = *str;
	i = 0;
	j = ft_strlen(*str) - 1;
	while (a[i] && i < j)
	{
		temp = a[i];
		a[i++] = a[j];
		a[j--] = temp;
	}
}