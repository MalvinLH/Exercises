/* Programmer: Malvin Leonardo Hartanto
 * Anagram Checker for String
*/

#include <stdio.h>
#include <string.h>


int main()
{
	char kata1[1000];
	printf("Kata 1 = ");
	gets(kata1);
	
	char kata2[1000];
	printf("Kata 2 = ");
	gets(kata2);
	
	int panjang1 = strlen (kata1);
	int panjang2 = strlen (kata2);
	
	int arr1[27];
	int arr2[27];
	
	for (int a = 0; a <= 26; a++)
		arr1[a] = 0;
		
	for (int b = 0; b <= 26; b++)
		arr2[b] = 0;
	
	for (int c = 0; c < panjang1; c++)
	{
		int alpha1 = kata1[c] - 96;
		arr1[alpha1]++;
	}
		
	for (int d = 0; d < panjang2; d++)
	{
		int alpha2 = kata2[d] - 96;
		arr2[alpha2]++;
	}
	
	bool anagram = true;
	
	for (int e = 1; e <= 26; e++)
	{	
		if(arr1[e] != arr2[e])
		{
			anagram = false;
			printf("Bukan anagram");
			break;
		}
	}	
		
	if(anagram==true)
		printf("Anagram");
}
