char	*grab_nd_resize(size_t fd, char *line, size_t line_size)
{
	char	*left_side;
	char	*rght_side;
	char	*nl_p;
	void	*garbage;
	size_t	x_size;
	size_t	corrected_lnsz;

	garbage = line_buff;
	nl_p = ft_strchr(line_buff, '\n');
	if (nl_pointer == NULL)
		return (line_buff);
	left_size = nl_p + 1 - line_buff;
	rght_size = line_size - left_size;
	left_side = ft_memdup(line_buff, left_size);
	/*
	** Line has been extracted, continue by copying rest into a new correct size line buff.
	*/
	line_buff = ft_memdup(line_buff + left_size, rght_side);
	/*
	** Linebuff is corrected, continue by correcting size and  returning the extracted line.
	*/
	line_size = rght_size;
	free(garbage);
	return (left_side);
}

int		get_next_line(size_t fd, char **line)
{
	static char		*line_buff;
	static size_t	line_size;
	char			read_buff[SIZE];
	void			*garbage;
	int				amt_read;
	char			*nl_found;
	/*
	** Line_size is initialized at 0 within the definition of the struct.
	** Line_buff is initialized at "" within the defition of the struct.
	*/
	amt_read = 0;
	while(!ft_strchr(linebuff,'\n') && amt_read = read(fd, read_buff, SIZE) && amt_read > 0)
	{
		garbage = linebuff;
		line_buff = ft_memjoin(line_buff, read_buff, line_size, amt_read);
		line_size += amt_read;
		free(garbage);
	}
	*line = grab_nd_resize(fd, line_buff, line_size);
}
