#include<stdio.h>

int main()
{
	int angka;
	
	printf ("Menu\n1. Food\n2. Beverage\n");
	
	while (angka != 1 && angka != 2)
	{
		printf ("Choose = ");
		scanf ("%d", &angka);
		
		if (angka != 1 && angka != 2)
			printf ("Wrong Choice !!!\n");
	}
	
	if (angka == 1)
		printf ("Your food is on the way");
	else if (angka == 2)
		printf ("Your beverage is on the way");
}
