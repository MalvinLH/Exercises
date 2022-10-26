#include <stdio.h>
#include <string.h>

int main()
{
	char kata[50];
	
	printf("Masukkan kata = ");
	gets(kata);
	
	int panjang = strlen (kata);
	printf("Reverse = ");
	for (int a = panjang-1; a >= 0; a--)
		printf("%c ", kata[a]);
}
