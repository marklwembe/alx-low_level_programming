/**
 * print_number - Prints a number
 * @n: Input variable
 * Return: Nothing, output is the printed value
 */
void print_number(int n)
{
	unsigned int res, dnd, count = 1;

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
	while (dnd > 9)
	{
		dnd = dnd / 10;
		count = count * 10;
	}

	while ( count >= 1)
	{
		_putchar(((res / count) % 10) + 48);
		count /= 10
	}
}
