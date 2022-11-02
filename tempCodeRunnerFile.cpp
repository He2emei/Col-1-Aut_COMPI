#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	int m, n;
	scanf("%d%d", &m,&n);
	for (int i = m; i <= n; i++)
	{
		if (i % 7 == 0)
			printf("%d是7的倍数\n", i);
		for (int a = i; a != 0; a = a / 10)
		{
			if (a % 10 == 7){
				printf("%d是带7的数\n", i);
                break;
            }
		}
	}
	return 0;
}
