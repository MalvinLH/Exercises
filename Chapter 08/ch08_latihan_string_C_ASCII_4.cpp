#include <stdio.h>
#include <string.h>


int main()
{
	char kalimat[1000];
	printf("Kalimat = ");
	gets(kalimat);
	
	int panjang = strlen (kalimat);
	
	int arr[27];
	for (int a = 0; a <= 26; a++)
		arr[a] = 0;
	
		
	for (int b = 0; b < panjang; b++)
	{
		int alpha = kalimat[b] - 96;
		arr[alpha]++;
	}
	
	for (int c = 1; c <= 26; c++)
	{
		printf("%c = %d\n", c + 96, arr[c]);
	}
}
