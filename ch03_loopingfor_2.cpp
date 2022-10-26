#include<stdio.h>

int main()
{
	printf("Batas = ");
	int b;
	scanf("%d", &b);
	
	for (int a = b; a >= 1; a--)
		printf("%d ", a);
}
