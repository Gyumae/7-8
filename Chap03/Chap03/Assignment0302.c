#include <stdio.h>

int main(void)
{
	int width, height;
	int area, circumference;

	printf("������ ����? ");
	scanf("%d", &width);
	printf("������ ����? ");
	scanf("%d", &height);

	area = width * height;
	printf("���簢���� ����: %d\n", area);

	circumference = (width * 2) + (height * 2);
	printf("���簢���� �ѷ�: %d", circumference);
}