#include <stdlib.h>

char *ft_strrev(char *str)
{
    char *tmp;
    int len;
    int i;
    int j;

    len = 0;
    while(str[len])
        len++;
    tmp = malloc(sizeof(char)*len);
    i = 0;
    while(str[i])
    {
        tmp[i]=str[i];
        i++;
    }
    i--;
    j = 0;
    while (tmp[i])
    {
        str[j]=tmp[i];
        i--;
        j++;
    }
    str[j] = '\0';
    return (str);
}
#include <stdio.h>

int main()
{
    printf("%s",ft_strrev("hello"));
}