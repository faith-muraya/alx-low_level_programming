#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi, re, wr;
	char *buf;

	if (!filename || letters == 0)
		return (0);
	fi = open(filename, O_RDONLY);

	if (fi < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fi);
		return (0);
	}
	re = read(fi, buf, letters);
	close(fi);
	if (re < 0)
		{	
		free(buf);
		return (0);
		}
	wr = write(STDOUT_FILENO, buf, re);
	if (wr <= 0)
	{
	free(buf);
	return (0);
	}
		free(buf);
		return (wr);
}
