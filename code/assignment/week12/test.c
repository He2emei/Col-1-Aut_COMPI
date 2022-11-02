#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	a = a / 100;
	a = a % 10000;
	b = a + 1024;
	printf("%d %d",a,b);
	return 0;

}