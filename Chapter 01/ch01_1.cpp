#include<stdio.h>
int main ()
{
	printf("Sisi = ");
	int sisi;
	scanf("%d", &sisi);
	
	int luas = sisi*sisi;
	int keliling = 4*sisi;
	
	printf("Luas = %d\n", luas);
	printf("Keliling = %d", keliling);
}
