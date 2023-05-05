#include "main.h"

/**
 * create_file - the function that creates
 * @filename: the name
 * @text_content: the content
 * Return: 1 if works, -1 if it doesnt
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int f2;

	if (!*filename)
	{
		return (-1);
	}

	file = open(filename, O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";

	for (f2 = 0; text_content[f2]; f2++);
	{
	if (f2 != 0)
		write(file, text_content, f2);
	close(file);
	return (1);
	}
}
