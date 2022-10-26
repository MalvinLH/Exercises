#include <stdio.h>
#include <string.h>

int main()
{
	char kata[500];
	char test = ' ';
	int jumlah = 0;
	
	printf("Masukkan kata = ");
	gets(kata);
	
	int panjang = strlen (kata);
	
	for (int a = 0; a < panjang; a++)
		if (test == kata[a])
			jumlah++;
	
	jumlah += 1;
	printf("Jumlah kata = %d", jumlah);
}
