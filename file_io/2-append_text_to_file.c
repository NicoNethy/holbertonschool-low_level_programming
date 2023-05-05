#include "main.h"

/**
 * append_text_to_file - append funct
 * @filename: the naem of the file
 * @text_content: the content
 * Return: if works 1, if not, not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int	file2;

	if (filename == NULL || !*filename)
	{
		return (-1);
	}
	
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (file2 = 0; *(text_content + file2; file2++)
			;
		write(file, text_content, file2);
	}
	close(file)
		return (1);
}
