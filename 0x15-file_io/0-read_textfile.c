 #include "main.h"

/**
 * read_textfile - reads a text file and prints the specified number of letters
 * @filename: pointer to the filename to read
 * @letters: the number of letters to print
 *
 * Return: The number of letters printed. If an error occurs, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	if (nrd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	nwr = write(STDOUT_FILENO, buf, nrd);
	if (nwr == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (nwr);
}
