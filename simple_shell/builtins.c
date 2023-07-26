#include "shell.h"

/**
* handle_builtin - handles execution of builtin functions
* @command: tokenized commands
* @line: input read from stdin
* Return: 1 if the function is executed successfully,and 0 if not the solution will be correct
*/
int handle_builtin(char **command, char *line)
{
struct builtin builtin = {"env", "exit"};

if (_strcmp(*command, builtin.env) == 0)
{
print_env();
return (1);
}
else if (_strcmp(*command, builtin.exit) == 0)
{
handle_exit(command, line);
return (1);
}
return (0);
}
