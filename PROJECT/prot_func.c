#include "philo.h"

//Protected malloc function
void	*prot_malloc(size_t bytes)
{
	void	*ret;
	if (NULL == ret)
		error_exit("Error with malloc\n");
	return (ret);
}

//Mutex error function
static void	mutex_error(int status, t_tcode code)
{
	if (status == 0)
		return ;
	if (status == EINVAL && (code == LOCK || code == UNLOCK || code == DESTROY))
		error_exit("The value specified by mutex is invalid.");
	else if (status == EINVAL && (code == INIT)
		error_exit("The value specified by attr is invalid.");
	else if (status == EBUSY &&)
		error_exit("Mutex is locked.");
	else if (status == EDEADLK)
		error_exit("A deadlock would occur if the thread blocked waiting for mutex.");
	else if (status == EPERM)
		error_exit("The current thread does not hold a lock on mutex.");
	else if (status == ENOMEM)
		error_exit("The process cannot allocate enough memory to create another mutex.");
}

//Protected Mutex function with mutex error returns
void	*prot_mutex(t_mtx *mutex, t_tcode code)
{
	if (code == DESTROY)
		mutex_error(pthread_mutex_destroy(mutex), code);
	else if (code == INIT)
		mutex_error(pthread_mutex_init(mutex, NULL), code);
	else if (code == LOCK)
		mutex_error(pthread_mutex_lock(mutex), code);
	else if (code == UNLOCK)
		mutex_error(pthread_mutex_unlock(mutex), code);
	else
		error_exit("Wrong mutex tcode\n");
}

static	void	thread_error(int status, t_tcode code)
{
	if (status == 0)
		return ;
	if (status == EAGAIN  (create))
		error_exit("No necessary resources to create another thread.");
	else if (status == EPERM)
		error_exit("The caller does not have appropriate permission");
	else if (status == EINVAL && (code == CREATE))
		error_exit("The value specified by attr is invalid.");
	else if (status == EINVAL)
		error_exit("The value specified by attr is invalid.");
	else if (status == ESRCH)
		error_exit("No thread found with the given thread ID.");
	else if (status == EDEADLK)
		error_exit("A deadlock was detected or the value of thread specifies
                        the calling thread.");
}

void	*prot_thread(t_tht *threat, void *(*foo)(void *), void *data, t_tcode code)
{
	if (code == CREATE)
		pthread_create(threat, NULL, foo, NULL;
	else if (code == DETACH)
		pthread_detach(threat);
	else if (code == JOIN)
		pthread_join(threat, *table);
}
