#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct group
{
	int a;
	double b;
};

int main(void)
{
	struct group g1;

	g1.a = 10;
	g1.b = 1.1234;

	printf("g1.a의 값 : %d \n", g1.a);
	printf("g1.b의 값 : %lf \n", g1.b);


	system("pause");

	return 0;

}