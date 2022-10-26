#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	scanf_s("%d&d", &a, &b);
	c = a * a + b * b;
	if (c >= 100)
		printf("%d\n", c / 100);
	else
		printf("%d\n", c);
	return 0;
}
