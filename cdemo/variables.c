#include <stdio.h>

int main()
{
	int a;
	int b = 3;
	int c;
	int d;

	a = 2;
	c = a + b;
	d = a;
	a = c;
	c = d;
	printf("Sum of %d and %d is %d\n", a, b, c);
}
