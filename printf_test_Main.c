#include <stdio.h>
#include"libftprintf.h"
#include <stddef.h>
#include <limits.h>

int main()
{
    int count;
    int realcount;
    int x = 42;
    
    printf("\t<------ CHARACTER ----->\n");
    count = ft_printf("Char: %c\n", 'A');
    realcount = printf("Char: %c\n", 'A');
  
    ft_printf("Returned count: %d\n", count);
    printf("Returned realcount: %d\n", realcount);
    ft_printf("Null character: %c\n", '\0');
    printf("Null character: %c\n", '\0');

    ft_printf("ASCII 0: %c, ASCII 127: %c\n", 0, 127);
    ft_printf("ASCII 0: %c, ASCII 127: %c\n", 0, 127);

	printf("\t<------ STRING ----->\n");

    count = ft_printf("Hello, World!\n");
    realcount = printf("Hello, World!\n");
   
    ft_printf("Returned count: %d\n", count);
    printf("Returned realcount: %d\n", realcount);
    
	count = 0;
	realcount = 0;
	
	count = ft_printf("Empty string: '%s'\n", "");
	 realcount = ft_printf("Empty string: '%s'\n", "");
	ft_printf("Returned count: %d\n", count);
     printf("Returned realcount: %d\n", realcount);
     count = 0;
	realcount = 0;    

	count = ft_printf("&&^^@@Long string: %c %s\n",  225, " This is a really long string to test if your ft_printf handles large inputs properly aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	realcount = printf("&&^^@@Long string: %c %s\n",  225, " This is a really long string to test if your ft_printf handles large inputs properly aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	ft_printf("Returned count: %d\n", count);
    printf("Returned realcount: %d\n", realcount);
	printf("\t<------ INTEGER ----->\n");
   
    count = ft_printf("Integer: %d\n", 42);
    realcount = printf("Integer: %d\n", 42);
   
    ft_printf("Returned count: %d\n", count);
     printf("Returned realcount: %d\n", realcount);
     
 	ft_printf("Positive: %d, Negative: %d\n", 123, -123);
	printf("Positive: %d, Negative: %d\n", 123, -123);
	
	ft_printf("Zero: %d\n", 0);
	printf("Zero: %d\n", 0);
	
	ft_printf("INT_MAX: %d, INT_MIN: %d\n", INT_MAX, INT_MIN); 
	printf("INT_MAX: %d, INT_MIN: %d\n", INT_MAX, INT_MIN);

	printf("\t<------ UNSIGNED INTEGER ----->\n");
	
	ft_printf("Unsigned: %u\n", 123);
	printf("Unsigned: %u\n", 123);
	
	ft_printf("Unsigned zero: %u\n", 0);
	printf("Unsigned zero: %u\n", 0);
	
	ft_printf("UINT_MAX: %u\n", UINT_MAX);
	printf("UINT_MAX: %u\n", UINT_MAX);

	printf("\t<------ HEXADECIMAL ----->\n");

    count = ft_printf("Hexadecimal: %x\n", 255);
    realcount = printf("Hexadecimal: %x\n", 255);
    
    ft_printf("Returned count: %d\n", count);
    printf("Returned realcount: %d\n", realcount);

	
    count = ft_printf("Hexadecimal: %X\n", 255);
    realcount = printf("Hexadecimal: %X\n", 255);
    
    ft_printf("Returned count: %d\n", count);
    printf("Returned realcount: %d\n", realcount);
    
    ft_printf("Hex zero: %x, %X\n", 0, 0);
	printf("Hex zero: %x, %X\n", 0, 0);
	
	ft_printf("Hex UINT_MAX: %x, %X\n", UINT_MAX, UINT_MAX);
	printf("Hex UINT_MAX: %x, %X\n", UINT_MAX, UINT_MAX);
	
	ft_printf("Large hex value: %x\n", 0xdeadbeef);
	printf("Large hex value: %x\n", 0xdeadbeef);

	printf("\t<------ PERCENT ----->\n");
	ft_printf("Percent: %%\n");
	printf("Percent: %%\n");
	
	ft_printf("Many percent signs: %% %% %%\n");
	printf("Many percent signs: %% %% %%\n");

	printf("\t<------ MULTIPLE FORMATS ----->\n");

	ft_printf("Char: %c, String: %s, Pointer: %p\n", 'A', "Test", &x);
	printf("Char: %c, String: %s, Pointer: %p\n", 'A', "Test", &x);
	ft_printf("Int: %d, Unsigned: %u, Hex: %x, Hex Upper: %X, Percent: %%\n", 42, 42, 42, 42);
	printf("Int: %d, Unsigned: %u, Hex: %x, Hex Upper: %X, Percent: %%\n", 42, 42, 42, 42);

	printf("\t<------ POINTER ----->\n");
    
    int *ptr = NULL;
    count = ft_printf("Null pointer: %p\n", ptr);
    realcount = printf("Null pointer: %p\n", ptr);
	ft_printf("Returned count: %d\n", count);
    printf("Returned realcount: %d\n", realcount);
    
	
	ft_printf("Pointer: %p\n", &x); 
	printf("Pointer: %p\n", &x);
	
	ft_printf("Pointer at zero: %p\n", (void *)0);
	printf("Pointer at zero: %p\n", (void *)0);
    return 0;
}
