#include<stdio.h>

int main()
{
	int batas, ang = 1;
	
	printf("Batas = ");
	scanf("%d", &batas);
	
	for (int b = batas; b >= 1; b--)
	{
		for (int k = b; k <= batas; k++)
		{
			printf("%d ", ang);
			ang++;
		}
		
		printf("\n");
	}
}
