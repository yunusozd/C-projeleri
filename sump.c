#include <stdio.h>
#include <stdlib.h>

void upgrade(int *a, int *b)
{
	int tmp1 = *a + *b;
	int tmp2 = abs(*a-*b);
	*a = tmp1;
	*b = tmp2;
}


int main(void)
{
	int a, b;
	printf("Insert two integers.\n>");
	scanf("%i",&a);
	printf(">");
	scanf("%i", &b);
	upgrade(&a, &b);
	printf("The numbers are: %i, %i.\n", a, b);

}
