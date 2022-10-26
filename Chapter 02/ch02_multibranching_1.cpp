#include<stdio.h>
int main ()
{
	int bil;
	printf("Bilangan = ");
	scanf("%d", &bil);
	
	if(bil>0)
		printf("Positif");
	else if(bil<0)
		printf("Negatif");
	else
		printf("Nol");
}
