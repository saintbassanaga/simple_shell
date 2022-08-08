#include "holberton.h"

/**
 * getBuiltin - builtin that pais the command in the arg
 * @cmd: command
 * Return: function pointer of the builtin command
 */
int (*getBuiltin(char *cmd))(data_shell *)
{
	builtin_t builtin[] = {
		{ "env",      _env },
		{ "exit",     exitShell },
		{ "setenv",   _setenv },
		{ "unsetenv", _unsetenv },
		{ "cd",       cdShell },
		{ "help",     getHelp },
		{ NULL, NULL }
	};
	int i;

	for (i = 0; builtin[i].name; i++)
	{
		if (_strcmp(builtin[i].name, cmd) == 0)
			break;
	}
	return (builtin[i].f);
}
