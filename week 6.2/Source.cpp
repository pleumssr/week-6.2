#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,j;
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			if (j == i)
			{
				printf("  ");
			}
			else printf("* ");
		}
		printf("\n");
	}
		return 0;
}