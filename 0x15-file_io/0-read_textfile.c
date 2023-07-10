#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t j, k;
	char *l;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	l = malloc(sizeof(char) * (letters));
	if (!l)
		return (0);

	j = read(i, l, letters);
	nwr = write(STDOUT_FILENO, l, j);

	close(i);

	free(l);

	return (k);
}
