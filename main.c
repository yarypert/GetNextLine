#include "get_next_line.h"

int		main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		ret;

	if (ac == 3)
		ac = 3;
	line = (char*)ft_memalloc(100);
	if (!(line = (char*)malloc(sizeof(char) * 100)))
		ft_putstr("malloc() failed\n");
	else if ((fd = open(av[1], O_RDONLY)) == -1)
		ft_putstr("open() failed\n");
	else
	{
		ft_putstr("Test 1, fd = ");
		ft_putnbr(fd);
		ft_putstr(" : [");
		ret = get_next_line(fd, &line);
		if (ret == -1)
			ft_putstr_fd("get_next_line() failed\n", 2);
		else if (ret == 0)
			ft_putstr("End of file reached\n");
		else
			ft_putstr(line);
		ft_putstr("]\n");
		ft_putstr("Test 1, fd = ");
		ft_putnbr(fd);
		ft_putstr(" : [");
		ret = get_next_line(fd, &line);
		if (ret == -1)
			ft_putstr_fd("get_next_line() failed\n", 2);
		else if (ret == 0)
			ft_putstr("End of file reached\n");
		else
			ft_putstr(line);
		ft_putstr("]\n");
	}
	if ((fd = open(av[2], O_RDONLY)) == -1)
		ft_putstr("open() failed\n");
	else
	{
		ft_putstr("Test 1, fd = ");
		ft_putnbr(fd);
		ft_putstr(" : [");
		ret = get_next_line(fd, &line);
		if (ret == -1)
			ft_putstr_fd("get_next_line() failed\n", 2);
		else if (ret == 0)
			ft_putstr("End of file reached\n");
		else
			ft_putstr(line);
		ft_putstr("]\n");
		ft_putstr("Test 1, fd = ");
		ft_putnbr(fd);
		ft_putstr(" : [");
		ret = get_next_line(fd, &line);
		if (ret == -1)
			ft_putstr_fd("get_next_line() failed\n", 2);
		else if (ret == 0)
			ft_putstr("End of file reached\n");
		else
			ft_putstr(line);
		ft_putstr("]\n");
		ft_putstr("Test 1, fd = ");
		ft_putnbr(fd);
		ft_putstr(" : [");
		ret = get_next_line(3, &line);
		if (ret == -1)
			ft_putstr_fd("get_next_line() failed\n", 2);
		else if (ret == 0)
			ft_putstr("End of file reached\n");
		else
			ft_putstr(line);
		ft_putstr("]\n");
		ft_putstr("Test 1, fd = ");
		ft_putnbr(fd);
		ft_putstr(" : [");
		ret = get_next_line(fd, &line);
		if (ret == -1)
			ft_putstr_fd("get_next_line() failed\n", 2);
		else if (ret == 0)
			ft_putstr("End of file reached\n");
		else
			ft_putstr(line);
		ft_putstr("]\n");
	}
}
