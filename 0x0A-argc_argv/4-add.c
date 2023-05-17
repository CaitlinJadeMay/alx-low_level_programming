#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Write a program that adds positive numbers
 * @str: array str
 *
 * Return: slways 0 (success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int may;

	may = 0;
	while (may < strlen(str)) /*count string*/

	{
		if (!isdigit(str[may])) /*check if str there are digit*/
		{
			return (0);
		}

		may++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: arg
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int may;
	int love;
	int equal = 0;

	may = 1;
	while (may < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[may]))

		{
			love = atoi(argv[may]); /*ATOI --> convert string to int*/
			equal += love;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		may++;
	}

	printf("%d\n", equal); /*print equal*/

	return (0);
}
