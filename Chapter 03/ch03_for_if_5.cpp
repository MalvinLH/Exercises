#include<stdio.h>

int main()
{
	int b, ang=1;
	
	printf("Bilangan = ");
	scanf("%d", &b);
	
	for (int a = 1; a <= b; a++) //nanti dicoba kasih if untuk negatif
		ang=ang*a;

	printf("%d != %d", b, ang);	
}
