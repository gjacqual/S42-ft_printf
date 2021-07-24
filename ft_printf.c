#include "includes/ft_printf.h"

int	ft_printf(const	char *inpt, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, inpt);
	if (!inpt)
		return (0);
	count = 0;
	i = 0;
	while (inpt[i])
	{
		if (inpt[i] != '%')
			count += write(1, &inpt[i], 1);
		else
		{
			i++;
			count = ft_type_define(ap, count, inpt, i);
		}
		 i++;
	}
	va_end(ap);
	return (count);
}
