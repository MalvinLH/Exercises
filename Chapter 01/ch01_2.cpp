#include<stdio.h>
int main ()
{
	printf("Panjang = ");
	int panjang;
	scanf("%d", &panjang);
	
	printf("Lebar = ");
	int lebar;
	scanf("%d", &lebar);
	
	int luas = panjang*lebar;
	int keliling = (2*panjang)+(2*lebar);
	
	printf("Luas = %d\n", luas);
	printf("Keliling = %d", keliling);
}
