/* Programmer: Malvin Leonardo Hartanto
 * Snake Case Camel Case
*/

#include <stdio.h>
#include <string.h>


int main()
{
	char kalimat[1000];
	printf("Kalimat = ");
	gets(kalimat);
	
	int panjang = strlen (kalimat);
	
	printf("Hasil = ");
	for(int a = 0; a < panjang; a++)
	{
		if (kalimat[a] == '_')
		{
			a++;
			printf("%c", kalimat[a] - 32);
		}
		else if (kalimat[a] >= 'A' && kalimat[a] <= 'Z')
		{
			printf("_%c", kalimat[a] + 32);
		}
		else
			printf("%c", kalimat[a]);
	}
}
