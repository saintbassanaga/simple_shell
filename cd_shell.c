#include "holberton.h"

/**
 * cdShell - changes current directory
 *
 * @datash: data relevant
 * Return: 1 on success
 */
int cdShell(data_shell *datash)
{
	char *dir;
	int ishome, ishome2, isddash;

	dir = datash->args[1];

	if (dir != NULL)
	{
		ishome = _strcmp("$HOME", dir);
		ishome2 = _strcmp("~", dir);
		isddash = _strcmp("--", dir);
	}

	if (dir == NULL || !ishome || !ishome2 || !isddash)
	{
		cdToHome(datash);
		return (1);
	}

	if (_strcmp("-", dir) == 0)
	{
		cdPrevious(datash);
		return (1);
	}

	if (_strcmp(".", dir) == 0 || _strcmp("..", dir) == 0)
	{
		cdDot(datash);
		return (1);
	}
	cdTo(datash);

	return (1);
}
