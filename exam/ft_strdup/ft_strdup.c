#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *str;
    int len;
    int i;

    len = 0;
    i = 0;
    if (src == NULL)
        return (NULL);
    while(src[len])
        len++;
    str = malloc((sizeof(char) * len) + 1);
    if (str == NULL)
        return (NULL);
    while(src[i])
    {
        str[i]=src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
#include <stdio.h>

int main()
{
    printf("%s",ft_strdup("hello"));
}