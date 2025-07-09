#include <stdio.h>

int main(void)
{
	int width, height;
	int area, circumference;

	printf("가로의 길이? ");
	scanf("%d", &width);
	printf("세로의 길이? ");
	scanf("%d", &height);

	area = width * height;
	printf("직사각형의 넓이: %d\n", area);

	circumference = (width * 2) + (height * 2);
	printf("직사각형의 둘레: %d", circumference);
}