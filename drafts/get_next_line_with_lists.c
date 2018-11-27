int		file_is_handled(int fd, t_file *list)
{
	while(list->next)
	{
		if(list->fd == fd)
			return (1);
	}
	return (0);
}

int		get_next_line(size_t fd, char **line)
{
	if (!file_is_handled(fd, list))
	{
		//create a node
		//add the node
	}
