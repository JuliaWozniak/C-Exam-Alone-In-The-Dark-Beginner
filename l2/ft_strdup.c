char	*ft_strdup(const char *str)
{
	char *astr;

	if ((astr = ((char *)malloc(ft_strlen(str) + 1))))
	{
		ft_strcpy(astr, str);
		return (astr);
	}
	return (0);
}
