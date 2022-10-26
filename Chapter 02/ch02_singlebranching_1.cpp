#include<stdio.h>
int main ()
{
	printf("Masukkan bilangan = ");
	int bil;
	scanf("%d", &bil);
	
	if(bil%3 == 0)
		printf("Kelipatan 3");
	else
		printf("Bukan kelipatan 3");
}
