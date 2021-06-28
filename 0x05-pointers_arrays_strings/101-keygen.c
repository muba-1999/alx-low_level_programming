#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/**
 * password_generator - generates a password
 * @N: character to hold password 
 *
 * Return: Always 0 (Success)
 */
void password_generator(int N)
{
	int i = 0;
	int ran = 0;
	char password = N;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[N];
	ran = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (ran == 1)
		{
			password[i] = numbers[rand() % 10];
			ran = rand() % 4;
			printf("%c", password[i]);
		}
		else if (ran == 2)
		{
			password[i] = symbols[rand() % 8];
			ran = rand() % 4;
			printf("%c", password[i]);
		}
		else if (ran == 3)
		{
			password[i] = letter[ran() % 26];
			ran = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password = LETTER[rand() % 26];
			ran = rand() % 4;
			printf("%c", password[i];
		}
	}
}
int main(void)
{
	int N = 10;

	password_generator(N);

	return (0);
}
