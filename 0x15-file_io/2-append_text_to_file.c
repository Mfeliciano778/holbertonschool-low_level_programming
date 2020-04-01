#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the Null terminated string to add at the end of the file
 *
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n_write, leng, file_des;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_APPEND | O_WRONLY);
		if (file_des < 0)
			return (-1);
	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng]; leng++)
		{
		}
		n_write = write(file_des, text_content, leng);

		close(file_des);
		if (n_write == leng)
			return (1);
		return (-1);
	}
	close (file_des);
	return (1);
}
