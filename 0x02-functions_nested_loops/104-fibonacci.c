#include<stdio.h>
/**
 * main - The fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, term_1, term_2, term_1_div, term_2_div;
	unsigned long int result_1, result_2;

	term_1 = 1;
	term_2 = 2;

	printf("%lu", term_1);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", term_2);
		term_2 = term_2 + term_1;
		term_1 = term_2 - term_1;
	}

	term_1_div = term_1 / 1000000000;
	term_2_div = term_1 % 1000000000;
	result_1 = term_2 / 1000000000;
	result_2 = term_2 % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", result_1 + (result_2 / 1000000000));
		printf("%lu", result_2 % 1000000000);
		result_1 = result_1 + term_1_div;
		term_1_div = result_1 - term_1_div;
		result_2 = result_2 + term_2_div;
		term_2_div = result_2 - term_2_div;
	}
	printf("\n");
	return (0);
}
