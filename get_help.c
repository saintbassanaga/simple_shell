#include "holberton.h"

/**
 * getHelp - function that retrieves help messages according builtin
 * @datash: data structure (args and input)
 * Return: Return 0
*/
int getHelp(data_shell *datash)
{

	if (datash->args[1] == 0)
                auxHelpGeneral();
	else if (_strcmp(datash->args[1], "setenv") == 0)
                auxHelpSetenv();
	else if (_strcmp(datash->args[1], "env") == 0)
                auxHelpEnv();
	else if (_strcmp(datash->args[1], "unsetenv") == 0)
                auxHelpUnsetenv();
	else if (_strcmp(datash->args[1], "help") == 0)
                auxHelp();
	else if (_strcmp(datash->args[1], "exit") == 0)
                auxHelpExit();
	else if (_strcmp(datash->args[1], "cd") == 0)
                auxHelpCd();
	else if (_strcmp(datash->args[1], "alias") == 0)
                auxHelpAlias();
	else
		write(STDERR_FILENO, datash->args[0],
		      _strlen(datash->args[0]));

	datash->status = 0;
	return (1);
}