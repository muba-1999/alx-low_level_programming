#include "main.h"

/**
 * read_textfile - reads a file and prints it
 * to the standard output
 * @filename: name of the file
 * @letters: size
 * Return: file content
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		return (0);
	}
	rd = read(file, buf, letters);
	if (rd == -1)
	{
		return (0);
	}
	buf[letters] = '\0';
	wr = write(1, buf, rd);
	if (wr == -1)
	{
		return (0);
	}
	close(file);
	free(buf);
	return (wr);
}
