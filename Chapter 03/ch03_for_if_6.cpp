#include<stdio.h>

int main()
{
	int b1, b2, ang = 1;
	
	printf("Bilangan 1 = ");
	scanf("%d", &b1);
	printf("Bilangan 2 = ");
	scanf("%d", &b2);
	
	for (int a = 1; a <= b2; a++)
		ang=ang*b1;
		
	printf("%d ^ %d = %d", b1, b2, ang);	
}
