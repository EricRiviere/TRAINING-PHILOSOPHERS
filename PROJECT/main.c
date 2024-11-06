#include "philo.h"

//STRATEGY:
//Creation of 2 arrays 1)philosophers/threads 2)forks/mutex
//Arguments: ./philo 5 800 200 200 [5]

int	main(int argc, char **argv)
{
	t_table	table;

	if (arc == 5 || argc == 6)
	{
		parse_input(&table, argv);
		data_init(&table);
		//dinner_start(&table);
		//clean(&table);
	}
	else
	{
		error_exit("Incorrect input:\n
			Input: ./philo 5 800 200 200 [5]")
	}
}
