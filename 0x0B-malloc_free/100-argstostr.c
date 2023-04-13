#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of your program.
* @ac: number of argument
* @av: input arg
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int x, y, z = 0, len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y]; y++)
len++;
}
len += ac;
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (NULL);
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y]; y++)
{
str[z] = av[x][y];
z++;
}
if (str[z] == '\0')
{
str[z++] = '\n';
}
}
return (str);
}
