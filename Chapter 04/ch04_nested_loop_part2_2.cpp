#include<stdio.h>

int main()
{
	int batas;
	
	printf("Batas = ");
	scanf("%d", &batas);
	
	for (int b = 1; b <= batas; b++)
	{
		for (int k = b; k >= 1; k--)
			printf("%d ", k);
		
		printf("\n");
	}
}
