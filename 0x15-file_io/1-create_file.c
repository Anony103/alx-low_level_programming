#include "main.h"

/**
 * create_file - creates a fil
 * @text_content: null terminated string to write to the file
 * @filename: name of the file to created
 * Return: 1 in success, -1 in failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd,size;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (tect_content)
	{

		for (size = 0; text_content[size] != '\0'; size++);

		write(fd, text_content, size);
	}
	close(fd);
	return (1);
}

