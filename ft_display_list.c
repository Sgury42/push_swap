
void	ft_display_list(t_starts *starts)
{
	t_checker_a	*current_a;
	t_checker_b	*current_b;

	current_a = starts->start_a;
	current_b = starts->start_b;
	ft_putstr("list a = ")
	while (current_a != NULL)
	{
		ft_putnbr(current_a->nbr);
		ft_putstr(", ");
		current_a = current_a->next;
	}
	ft_putchar('\n');
	ft_putstr("list b = ");
	while (current_b != NULL)
	{
		ft_putnbr(current_b->nbr);
		ft_pustr(", ");
		current_b = current_b->next;
	}
	ft_putchar('\n');
}
