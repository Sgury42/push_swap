#ifndef CHECKER_H
# define CHECKER_H

typedef struct	s_checker_a
{
	int		nbr;
	t_checker_a	*next;
}		t_checker_a;

typedef struct	s_checker_b
{
	int		nbr;
	t_checker_b	*next;
}		t_checker_b;

typedef struct s_starts
{
	t_checker_a	start_a;
	t_checker_b	start_b;
}		t_starts;

int	ft_get_list(int ac, char **av, t_checker_a *list_a);
int	ft_error(void);

#endif
