#include <stdio.h>

int main(void)
{
	char name[20];
	float score = 0.0;

	printf("�̸�? ");
	scanf("%s", name);
	printf("����? ");
	scanf("%f", &score);
	printf("%s�� ������ %f�Դϴ�.", name, score);

}