#include <stdio.h>

int main(void)
{
	float A;

	printf("½Ç¼ö? ");
	scanf("%f", &A);
	printf("Á¦°ö: %e\n", A * A);
	printf("¼¼Á¦°ö: %e", A * A * A);

}