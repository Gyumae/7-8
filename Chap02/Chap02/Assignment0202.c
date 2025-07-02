#include <stdio.h>

int main(void)
{
	char name[20];
	float score = 0.0;

	printf("이름? ");
	scanf("%s", name);
	printf("학점? ");
	scanf("%f", &score);
	printf("%s의 학점은 %f입니다.", name, score);

}