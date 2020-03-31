#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: pointer to the file we are reading
 * @letters: the number of letters it should read and print
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buf;
	ssize_t n_read, n_written;

	if (!filename)
		return (0);
	buf = malloc(letters);
		if (!buf)
			return (0);

	file_descriptor = open(filename, O_RDONLY);
		if (file_descriptor < 0)
		{
			free(buf);
			return (0);
		}
	n_read = read (file_descriptor, buf, letters);
		if (n_read == -1)
		{
			close(file_descriptor);
			free(buf);
			return (0);
		}

	n_written = write (STDOUT_FILENO, buf, n_read);

	free(buf);
	close(file_descriptor);

	if (n_written == n_read)
		return (n_written);

	return (0);
}
