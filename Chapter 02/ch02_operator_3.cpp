#include<stdio.h>
int main ()
{
	printf("Bilangan = ");
	int bil;
	scanf("%d", &bil);
	
	int ribuan = bil/1000;
	bil = bil%1000;
	
	int ratusan = bil/100;
	bil = bil%100;
	
	int puluhan = bil/10;
	bil = bil%10;
	
	int satuan = bil/1;
	bil = bil%1;
	
	printf("Ribuan = %d\n", ribuan);
	printf("Ratusan = %d\n", ratusan);
	printf("Puluhan = %d\n", puluhan);
	printf("Satuan = %d", satuan);
}
