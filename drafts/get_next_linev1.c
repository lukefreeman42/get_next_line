int		read_n_store(size_t fd, char *storage, size_t storage_amnt)
{
	int		read_amnt;
	char	read_b[SIZE];
	char	*garbage;

	read_amnt = -2;
	while(!ll_strchr(storage, '\n') && read_amnt = read(fd, read_b, SIZE) && read_amnt > 0)
	{
		garbage = storage;
		storage = (char*)ll_memjoin(storage, read_b, storage_amnt, read_amt);
		storage_amnt += read_amt;
		free(garbage);
	}
	return (read_amt);
}

char	*grab_next_line(size_t fd, char *storage, size_t storage_amt)
{
	char	*nl_pointer;
	char	*left;
	char	*rght;
	size_t	left_size;
	size_t	rght_size;
	
	nl_pointer = ll_strchr(storage, '\n');
	left_size = nl_pointer - storage + 1;
	right_size = storage_amt - left_size;
	*nl_pointer++ = '\0';
	left = (char*)ll_memdup(storage, left_size);
	rght = (char*)ll_memdup(nl_pointer, right_size);
	free(storage);
	storage = right;
	return (left);
}

int		get_next_line(size_t fd, char **line)
{
	int				read_status;
	static char		*storage;
	static size_t	storage_amt;

	read_status = read_n_store(fd, storage, storage_amt);
	if (read_status == -1)
		return (-1);
	if (ll_strchr(storage, c))
	{
		*line = grab_next_line(fd, storage, storage_amt);
		return (1);
	}
	else
	{
		*line = grab_next_line(fd, storage, storage_amt);
		return (0);
	}
}
