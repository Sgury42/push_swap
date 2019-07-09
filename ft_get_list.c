
static int check_data(char *str)
{
	while (*str)
		if (!ft_isdigit(*str++))
			return (-1);
}

int		ft_get_list(int len, char **av, t_checker_a *current)
{
	t_checker_a	*new;
	int		i;
	int		nb;

	i = 0;
	while (i < len)
	{
		if (check_data(av[i]) < 0)
			return (-1);
		if ((new = (t_checker_a *)malloc(sizeof(t_checker_a))) == NULL)
			return (-1);
		new->nbr = ft_atoi(av[i]);
		new->next = NULL;
		current->next = new;
		current = new;
		i++;
	}
	return (0);
}
