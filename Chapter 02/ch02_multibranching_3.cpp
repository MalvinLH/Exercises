#include<stdio.h>
int main ()
{
	int bil;
	printf("Bilangan = ");
	scanf("%d", &bil);
		
	if(bil%4==0)
		printf("Kategori 4N");
	else if(bil%4==1)
		printf("Kategori 4N+1");
	else if(bil%4==2)
		printf("Kategori 4N+2");
	else if(bil%4==3)
		printf("Kategori 4N+3");
}
