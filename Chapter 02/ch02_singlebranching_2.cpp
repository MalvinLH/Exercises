#include<stdio.h>
int main ()
{
	printf("Bilangan = ");
	int bil;
	scanf("%d", &bil);
	
	if(bil%2 == 0)
		printf("Genap");
	else
		printf("Ganjil");
}
