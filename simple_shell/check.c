#include "shell.h"

/**
*checker - checks a built-in function
*@cmd: tokenized user input
*@buf: line derived from the getline function
*Return: 1 if command is executed, 0 if command is not executed the result will be good
*/

int checker(char **cmd, char *buf)
{
if (handle_builtin(cmd, buf))
return (1);
else if (**cmd == '/')
{
execution(cmd[0], cmd);
return (1);
}
return (0);
}
