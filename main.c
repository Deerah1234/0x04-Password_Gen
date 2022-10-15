#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - prints a random password
  *
  * Description - Using srand() from <stdlib.h>,
  * time() from <time.h> library.
  * Selects and prints ASCII character from 33-126,
  * Alphabets: Upper and lower, Digits: 0-9 and Punctuations.
  *
  * Return: 0 (success)
  */
int main(void)
{
        int counter;

        srand(time(NULL)); /* only do this once */

        for (counter = 0; counter < 10; counter++)
        {
                char passwrd = (rand() % (33-126)) + 33; /* choose from ASCII from 33-126 */

                printf("%c", passwrd);
        }
        printf("\n");
        return (0);
}
