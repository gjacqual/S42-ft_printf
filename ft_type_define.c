#include "includes/ft_printf.h"

int	ft_type_define(va_list ap, int	count, const char *inpt, int i)
{
	if (inpt[i] == '%')
		count += write(1, &inpt[i], 1);
	else if (inpt[i] == 'c')
		count += ft_print_char(ap);
	else if (inpt[i] == 's')
		count += ft_print_string(ap);
	else if (inpt[i] == 'i' || inpt[i] == 'd' )
		count += ft_print_iord_int(ap);
	else if (inpt[i] == 'u')
		count += ft_print_un_int(ap);
	else if (inpt[i] == 'p')
		count += ft_print_pointer_int(ap);
	else if (inpt[i] == 'x' || inpt[i] == 'X' )
		count += ft_print_xx_int(ap, inpt, i);
	return (count);
}
