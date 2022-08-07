#include "holberton.h"

/**
 * getSigint - Handle the crtl + c call in prompt
 * @sig: Signal handler
 */
void getSigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}