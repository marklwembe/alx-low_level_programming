/**
 * print_number - Prints a number
 * @n: Input variable
 * Return: Nothing, output is the printed value
 */
void print_number(int n)
{
	unsigned int res, dnd, count;

	if (n < 0)
	{
		_putchar(45);
		res = n * -1;
	}
	else
	{
		res = n;
	}

	dnd = res;
	count = 1;

	while (dnd > 9)
	{
		dnd /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((res / count) % 10) + 48);
	}
}
