#include<stdio.h>

int main()
{
	int batas;
	
	printf("Batas = ");
	scanf("%d", &batas);
	
	for (int b = batas; b >= 1; b--)
	{
		for (int k = 1; k <= b; k++)
			printf("%d ", k);
		
		printf("\n");
	}
}
