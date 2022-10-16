#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Keygen for 101-crackme
 *
 * Description: Prints a random password that
 * matches the decimal value from the 101-crackme.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int cunter, rnum, idx, key;
	char *ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char psswrd[50];

	srand(time(NULL));
	while (key != 2772)
	{
		cunter = idx = key = 0;
		while (key < 2772)
		{
			rnum = rand() % 63;
			psswrd[cunter] = ch[rnum];
			key += ch[rnum];
			cunter++;
		}
		while (ch[idx])
		{
			if (ch[idx] == (2772-key))
			{
				rnum = rand() % 63;
				psswrd[cunter] = ch[rnum];
				key += ch[rnum];
				cunter++;
				break;
			}
			idx++;
		}
	}
	psswrd[cunter] = '\0';
	printf("%s", psswrd);
	return (0);
}

