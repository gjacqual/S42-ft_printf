#include "includes/ft_printf.h"

int	ft_print_string(va_list ap)
{
	char	*s_val;
	int		count;

	s_val = va_arg(ap, char *);
	if (s_val == NULL)
		s_val = "(null)";
	count = ft_putstr_counter(s_val);
	return (count);
}

int	ft_print_iord_int(va_list ap)
{	
	int		d_val;
	char	*numb;
	int		count;

	d_val = va_arg(ap, int);
	numb = ft_itoa(d_val);
	if (numb == NULL)
		return (0);
	count = ft_putstr_counter(numb);
	free(numb);
	return (count);
}

int	ft_print_un_int(va_list ap)
{	
	int		u_val;
	char	*numb2;
	int		count;

	u_val = va_arg(ap, int);
	numb2 = ft_un_itoa(u_val);
	if (numb2 == NULL)
		return (0);
	count = ft_putstr_counter(numb2);
	free(numb2);
	return (count);
}

int	ft_print_xx_int(va_list ap, const char *inpt, int i)
{
	unsigned int	x_val;
	char			*numbx;
	int				count;

	x_val = va_arg(ap, unsigned int);
	if (inpt[i] == 'X')
	{
		numbx = ft_xx_itoa(x_val, "0123456789ABCDEF");
		if (numbx == NULL)
			return (0);
		count = ft_putstr_counter(numbx);
	}
	else
	{
		numbx = ft_xx_itoa(x_val, "0123456789abcdef");
		if (numbx == NULL)
			return (0);
		count = ft_putstr_counter(numbx);
	}
	free(numbx);
	return (count);
}

int	ft_print_pointer_int(va_list ap)
{	
	unsigned long	p_val;
	int				count;

	count = 0;
	p_val = (unsigned long)va_arg(ap, void *);
	if (!p_val)
		count = write(1, "0x0", 3);
	else
	{
		count = write(1, "0x", 2);
		count += ft_putnbr_ptr(p_val);
	}
	return (count);
}
