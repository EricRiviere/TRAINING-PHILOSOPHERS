#include "philo.h"

void	data_init(&table)
{
	table->end_simulation = false;
	table->philos = prot_malloc(sizeof(table->philo_nbr) * table->philo_nbr);
	 
}
