#include <stdio.h>
#define ydToMiter 0.9144

int main(void)
{
	int yard;
	double miter;
	printf("����(yd)? ");
	scanf("%d", &yard);

	miter = yard * ydToMiter;

	printf("%d yd = %f m", yard, miter);
}