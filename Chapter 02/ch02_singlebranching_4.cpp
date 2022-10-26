#include<stdio.h>
int main ()
{
	float bil;
	printf("Masukkan bilangan = ");
	scanf("%f", &bil);
	
	int temp = bil;
	
	if(temp==bil)
		printf("Bilangan bulat");
	else
		printf("Bilangan pecahan");
	
	/*
	bisa juga itu langsung
	if((int)bil == bil)
		printf("Bilangan bulat");
	else
		printf("Bilangan pecahan");
	jadi ndak perlu bikin "int temp = bil;"
	*/
}
