#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NIll terminated string to write to the file.
 *
 *
 * Return: Always 0
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, leng, n_write;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
		if (file_descriptor < 0)
			return (-1);
	if (text_content == NULL)
	{
		n_write = write(file_descriptor, "", 0);
			if (n_write < 0)
				return (-1);
		return (1);
	}
	for (leng = 0; text_content[leng]; leng++)
	{
	}
	n_write = write(file_descriptor, text_content, leng);
		if (n_write < 0)
			return (-1);
	close(file_descriptor);
	return (1);
}
