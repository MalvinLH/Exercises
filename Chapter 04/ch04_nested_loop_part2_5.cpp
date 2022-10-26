#include<stdio.h>

int main()
{
	int batas;
	
	printf("Batas = ");
	scanf("%d", &batas);
	
	int ang = 0;
	for (int b = 1; b <= batas; b++)
		ang+=b;
	
	for (int b = 1; b <= batas; b++)
	{
		for (int k = b; k >= 1; k--)
		{
			printf("%3d", ang);
			ang--;
		}
		printf("\n");
	}
}
