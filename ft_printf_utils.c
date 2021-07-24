#include "includes/ft_printf.h"

int	ft_print_char(va_list ap)
{	
	char	c_val;
	int		count;

	c_val = va_arg(ap, int);
	count = write(1, &c_val, 1);
	return (count);
}

int	ft_putnbr_ptr(unsigned long n)
{
	char			*set;
	unsigned long	setlen;
	unsigned long	nb;
	int				len;

	set = "0123456789abcdef";
	len = 1;
	nb = n;
	setlen = ft_strlen(set);
	if (nb == 0)
	{
		ft_putchar_fd('0', 1);
		return (len);
	}
	if (nb >= setlen)
	{
		len += ft_putnbr_ptr(nb / setlen);
		ft_putchar_fd(set[nb % setlen], 1);
	}
	else if (nb < setlen)
		ft_putchar_fd(set[nb], 1);
	return (len);
}

int	ft_putstr_counter(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
