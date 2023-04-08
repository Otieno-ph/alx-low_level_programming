#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
	{
		unsigned long int mask = 1;
		int shift_count = 0;

		while ((mask << 1) <= n)
			mask <<= 1;

		while (mask > 0)
		{
			if (n ^ mask)
				_putchar('1');
			else
				_putchar('0');

			mask >>= 1;
			shift_count++;

		}

		if (shift_count == 0)
			_putchar('0');

		}

