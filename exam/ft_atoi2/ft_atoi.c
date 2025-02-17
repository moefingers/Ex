int ft_atoi(const char *str)
{
	int i;
	int s;
	int r;
	
	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + str[i] - '0';
		i++;
	}
	return (r * s);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("	 -456jnj789mcdjn"));
}
