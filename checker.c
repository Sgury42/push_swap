
static int	ft_init_ab(t_checker_a *list_a, t_checker_b *list_b, t_starts *starts)
{
	if ((list_a = (t_checker_a *)malloc(sizeof(t_checker_a))) == NULL
	|| (list_b = (t_checker_b *)malloc(sizeof(t_checker_b))) == NULL
	|| (starts = (t_starts *)malloc(sizeof(t_starts))) == NULL)
		return (-1);
	list_a->nbr = 0;
	list_b->nbr = 0;
	list_a->next = NULL;
	list_b->next = NULL;
	starts->start_a = list_a;
	starts->start_b = list_b;
	return (0);
}

int	main(int ac, char **av)
{
	t_checker_a	list_a;
	t_checker_b	list_b;
	t_starts	starts;

	if (ac < 2)
		return (ft_error(void));
	if (ft_init_ab(&list_a, &list_b, &starts) < 0)
		return (ft_error(void));
	if (ft_get_tab(ac - 1, av, &list_a) < 0)
		return (ft_error(void));
}
