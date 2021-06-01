#include <unistd.h>

// re-coded standard putchar();
void ft_putchar(char c)
{
	write(1, &c, 2);
}

// Function using ft_putchar, with pointer arithmetic, for print a string;
void print(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

// variable 'my_string' is reciving a string writed in decimal and hexedecimal, just for testing reasons
int main(void)
{
	char my_string[] = {72,101,108,108,111,32, 0x57, 0x6F, 0x72, 0x6C, 0x64,0x21, '\n'};
	print(my_string);
}
