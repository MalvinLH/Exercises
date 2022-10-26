#include <stdio.h>
#include <string.h>

int main()
{
	char kata[500];
	char test_a = 'a', test_A = 'A';
	char test_e = 'e', test_E = 'E';
	char test_i = 'i', test_I = 'I';
	char test_o = 'o', test_O = '0';
	char test_u = 'u', test_U = 'U';
	int jumlah1 = 0;
	int jumlah2 = 0;
	int jumlah3 = 0;
	int jumlah4 = 0;
	int jumlah5 = 0;
	
	printf("Masukkan kata = ");
	gets(kata);
	
	int panjang = strlen (kata);
	
	for (int a = 0; a < panjang; a++)
	{
		if (test_a == kata[a] || test_A == kata[a])
		{
			jumlah1++;
		}
		if (test_e == kata[a] || test_E == kata[a])
		{
			jumlah2++;
		}
		if (test_i == kata[a] || test_I == kata[a])
		{
			jumlah3++;
		}
		if (test_o == kata[a] || test_O == kata[a])
		{
			jumlah4++;
		}
		if (test_u == kata[a] || test_U == kata[a])
		{
			jumlah5++;
		}
	}
	
	printf ("huruf a = %d ", jumlah1);
	printf("(");
	for (int b = 1; b <= jumlah1; b++)
		printf("*");
	printf(")\n");
	
	printf ("huruf e = %d ", jumlah2);
	printf("(");
	for (int c = 1; c <= jumlah2; c++)
		printf("*");
	printf(")\n");
	
	printf ("huruf i = %d ", jumlah3);
	printf("(");
	for (int d = 1; d <= jumlah3; d++)
		printf("*");
	printf(")\n");
	
	printf ("huruf o = %d ", jumlah4);
	printf("(");
	for (int e = 1; e <= jumlah4; e++)
		printf("*");
	printf(")\n");
	
	printf ("huruf u = %d ", jumlah5);
	printf("(");
	for (int f = 1; f <= jumlah5; f++)
		printf("*");
	printf(")\n");
}
