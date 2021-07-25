char    *ft_strdup(char *str)
{
    int     i;
    char    *newstr;

    i = 0;
    while (str[i])
        i++;
    newstr = malloc (sizeof(char) * (i + 1));
    i = 0;
    while (str[i])
    {
        newstr[i] = str[i];
        i++;
    }
    newstr[i] = '\0';
    return (newstr);
}