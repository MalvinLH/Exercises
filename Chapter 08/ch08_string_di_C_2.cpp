#include <stdio.h>
#include <string.h>

int main()
{
	char kata[500];
	char test1 = 'a';
	char test2 = 'A';
	int jumlah = 0;
	
	printf("Masukkan kata = ");
	gets(kata);
	
	int panjang = strlen (kata);
	
	for (int a = 0; a < panjang; a++)
	{
		if (test1 == kata[a] || test2 == kata[a])
			jumlah++;
	}
	
	printf("Jumlah huruf a = %d", jumlah);
}
