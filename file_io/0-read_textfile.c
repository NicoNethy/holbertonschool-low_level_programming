#include "main.h"

/**
 * read_textfile - the function
 * @filename: the file
 * @letters: how many letters
 * Return: allways
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int	f2;
	char *buff = malloc(letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);

	f2 = read(file, buff, letters);
	if (f2 == -1)
		return (0);

	write(STDOUT_FILENO, buff, f2);
	free(buff);
	close(file);
	return (f2);
}
