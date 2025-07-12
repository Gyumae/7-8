#include <stdio.h>
#define lbkg 0.45359237

int main(void)
{
	int lb;
	double kg;

	printf("¹«°Ô(lb)? ");
	scanf("%d", &lb);
	kg = lb * lbkg;
	printf("%d lb = %f kg", lb, kg);
}