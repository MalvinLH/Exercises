#include<stdio.h>
#include<math.h>
int main ()
{
	printf("Alas = ");
	int alas;
	scanf("%d", &alas);
	
	printf("Tinggi = ");
	int tinggi;
	scanf("%d", &tinggi);
	
	float sisi_miring = sqrt(alas*alas+tinggi*tinggi);
	
	printf("Sisi miring = %.2f", sisi_miring);
}
