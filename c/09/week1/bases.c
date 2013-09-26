/* bases.c -- 以十进制、八进制和十六进制形式输出100 */
#include <stdio.h>
int main(void)
{
	int x = 100;

	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);	// 不带前缀
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);	// 带前缀

	return 0;
}