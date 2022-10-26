#include<stdio.h>

int main()
{
	int batas;
	
	printf("Batas = ");
	scanf("%d", &batas);
	
	for (int b = 1; b <= batas; b++)
	{
		for (int k = batas; k >= 1; k--)
		{
			if(k <= b)
				printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
}
