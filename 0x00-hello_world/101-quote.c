/* printing to standard error */

#include <unistd.h>
#include <stdio.h>
/**
 * main - using fwrite to print out to stderr the words "
*and that piece of art is usefull" - Dora Korpar, 2015-10-19 "
 *
 * Return: this time 1
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	       39, 2, stderr);

	return (1);
}
