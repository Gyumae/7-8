#include <stdio.h>

int main(void)
{
	float f1 = 0.0, f2 = 0.0;

	printf("�Ǽ� 2��? ");
	scanf("%f %f", &f1, &f2);

	printf("%f + %f = %f\n", f1, f2, f1 + f2);
	printf("%f - %f = %f", f1, f2, f1 - f2);
}