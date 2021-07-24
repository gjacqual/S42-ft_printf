#include "includes/ft_printf.h"

static char	*ft_strbuild_un(unsigned int n, char	*numstr, size_t	sizestr)
{
	numstr[sizestr] = '\0';
	if (n < 0)
	{
		numstr[0] = '-';
		n = -n;
	}
	else if (n == 0)
		numstr[0] = '0';
	while (n != 0)
	{	
		numstr[--sizestr] = (n % 10) + '0';
		n /= 10;
	}
	return (numstr);
}

static	int	ft_size_intstr_long(long n)
{
	size_t	i;
	int		sign;

	if (n <= 0)
		sign = 1;
	else
		sign = 0;
	i = sign;
	while (n != 0)
	{
		n /=10;
		i++;
	}
	return (i);
}

char	*ft_un_itoa(unsigned int n)
{
	char	*numstr;
	size_t	sizestr;

	sizestr = ft_size_intstr_long(n);
	numstr = (char *)ft_calloc((sizestr + 1), 1);
	if (numstr)
	{
		numstr = ft_strbuild_un(n, numstr, sizestr);
		return (numstr);
	}
	return (NULL);
}

static	int	ft_size_intstr_xx(unsigned int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /=16;
		i++;
	}
	return (i);
}

char	*ft_xx_itoa(unsigned int n, char *str)
{
	char			*numstr;
	size_t			sizestr;
	unsigned int	nb;

	nb = n;
	sizestr = 0;
	if (n == 0)
		sizestr++;
	sizestr += ft_size_intstr_xx(n);
	numstr = (char *)ft_calloc((sizestr + 1), 1);
	if (numstr)
	{
		numstr[sizestr] = '\0';
		while (sizestr > 0)
		{
			numstr[sizestr - 1] = str[n % 16];
			sizestr--;
			n /=16;
		}
		return (numstr);
	}
	return (NULL);
}
