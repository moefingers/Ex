int ft_atoi(const char *str)
{
	int i;
	int c;
	int r;

	i = 0;
	c = 1;
	r = 0;
	while(str[i])
	{
		while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
			i++;
		if(str[i] == '+')
			i++;
		else if(str[i] == '-')
		{
			c *= -1;
			i++;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			r = (r * 10) + str[i] - 48;
			i++;
		}
	}
	return(r * c);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("	  -23337"));
	return 0;
}
