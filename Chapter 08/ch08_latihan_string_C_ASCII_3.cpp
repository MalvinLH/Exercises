/* Programmer: Malvin Leonardo Hartanto
 * Palindrome Checker for String.
*/

#include <stdio.h>
#include <string.h>


int main()
{
	char kata[1000];
	printf("Kata / Kalimat = ");
	gets(kata);
	
	int panjang = strlen (kata);
	
	bool palindrom = true;
	
	for (int a = 0; a < panjang/2; a++)
		{
			if(kata[a] != kata [panjang - a - 1])
			{
				palindrom = false;
				printf("Bukan palindrom");
				break;
			}
		}
	
	if (palindrom == true)
		printf("Palindrom");
}
