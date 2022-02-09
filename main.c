#include "./includes/ft_printf.h"
# include <stdio.h>

int main()
{
    int r;
    char *c = "abcdefgh13";
    char *s[10] = {"abcd\0", "1234\0", NULL, "", "abcd\0", "1234\0", "dfge\0", "dffg\0", "abcd\0", "1234\0"};
    int a[10] = {0, 2147483647, -2147483648, 3, -4, 5, -6, 7, -8, 9};
    unsigned int u[10] = {0, 2147483647, 4294967295, -3, 4, 5, 6, 7, 8, 9};
    int x[10] = {0, 2147483647, 429496729, -12, 4, -1000000, 6, 7, 11, 9};

    printf("\n");

    //printf("%s|\t \n", s[2]);
    //ft_printf("%s|\t \n", s[2]);


    for(int i = 0; i < 10; i++)
    {
		printf("Итерация %d\n", i);
    	r = ft_printf("My: bubble Gum |%c|\t|%s|\t|%p|\t|%d|\t|%i|\t|%u|\t|%x|\t|%X|\t|%%|\t", c[i], s[i], &s[i], a[i], a[i], u[i], x[i], x[i]);
        printf("res:%d\n", r);
        r = printf("Or: bubble Gum |%c|\t|%s|\t|%p|\t|%d|\t|%i|\t|%u|\t|%x|\t|%X|\t|%%|\t", c[i], s[i], &s[i], a[i], a[i], u[i], x[i], x[i]);
        printf("res:%d\n\n", r);


		
    }

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
