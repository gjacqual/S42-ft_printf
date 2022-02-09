#include "./includes/ft_printf.h"
# include <stdio.h>

int main()
{
/* my tests */
char cimb = 'R';
char *str;
str = "Пример строки";
char *q[10] = {"dfge\0"};
ft_printf("My: \n");
 	ft_printf("test: процент: %% символ: %c строка: <%s> число i: %i число d: %d unsigned: %u, Указ: %p, small x: %x BIG: %X \n", cimb, str, 333, 93234, 2147483647, &q, 4444, 111);
ft_printf("Original: \n");
 	printf("ttest: процент: %% символ: %c строка: <%s> число i: %i число d: %d unsigned: %u, Указ: %p, small x: %x BIG: %X \n", cimb, str, 333, 93234, 2147483647, &q, 4444, 111);
 	
return (0);
  }

// valgrind ./a.out --leak-check=full
//gcc -g main.c
// gcc -Wall -Wextra -Werror main.c libftprintf.a && ./a.out
