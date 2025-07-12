#include <stdio.h>
#define InchtoCM 2.54

int main(void)
{
	float inch = 0;
	printf("±Ê¿Ã(inch)? ");
	scanf("%f", &inch);

	printf("%f inch = %f cm", inch, inch * InchtoCM);
}