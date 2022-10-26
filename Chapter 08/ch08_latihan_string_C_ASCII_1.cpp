/* Programmer: Malvin Leonardo Hartanto
 * Simple Encription Program
*/

#include <stdio.h>
#include <string.h>


int main()
{
	char pesan[1000];
	printf("Pesan Rahasia = ");
	gets(pesan);
	
	int kode;
	printf("Kode = ");
	scanf("%d", &kode);
	
	int panjang = strlen (pesan);
	
	printf("Hasil Enkripsi = ");
	for(int a = 0; a < panjang; a++)
	{
		if (pesan[a] == ' ')
			printf(" ");
		else if (pesan[a] + kode > 'z')
			printf("%c", pesan[a] + kode - 26);
		else
			printf("%c", pesan[a] + kode) ;
	}
}
