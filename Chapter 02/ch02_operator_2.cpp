/* Programmer: Malvin Leonardo Hartanto
 * Menghitung jumlah lembaran uang
*/

#include<stdio.h>

int main()
{
	printf("Gaji = ");
	int g;
	scanf("%d", &g); 
	
	int u100 = g / 100000 ; 
	g = g % 100000; 
	
	int u50 = g / 50000; 
	g = g % 50000; 
	
	int u20 = g / 20000;
	g = g % 20000;
	
	int u10 = g / 10000;
	g = g % 10000;
	
	int u5 = g / 5000;
	g = g % 5000;
	
	int u2 = g / 2000;
	g = g % 2000;
	
	int u1 = g / 1000;
	g = g % 1000;
	
	printf("100.000 = %d lembar\n", u100);
	printf("50.000 = %d lembar\n", u50);
	printf("20.000 = %d lembar\n", u20);
	printf("10.000 = %d lembar\n", u10);
	printf("5.000 = %d lembar\n", u5);
	printf("2.000 = %d lembar\n", u2);
	printf("1.000 = %d lembar", u1);
}
