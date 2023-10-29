#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Author: Thaoban Abdrasheed
 * Return: int
 */
int factorize(char *buffer)
{

	unsigned long long int num;
	unsigned long long int i;

	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%llu=%llu*%llu\n",num,num/i,i);
			break;
		}
	}

return (0);
}
