#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 30;
	int result;

	result = a + b * c;
	printf("result = %d\n", result);	// a + (b * c)

	result = (a + b) * c;
	printf("result = %d\n", result);	// (a + b) * c

	result = a < b && c < 0;
	printf("result = %d\n", result);	// (a < b) && (c < 0)

	return 0;
}