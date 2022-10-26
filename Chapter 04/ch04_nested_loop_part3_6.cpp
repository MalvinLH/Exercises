/* Programmer: Malvin Leonardo Hartanto
 * Printing rhombus shape
*/

#include<stdio.h>

int main()
{
	int batas;
	
	printf ("Batas = ");
	scanf ("%d", &batas);
	
	for (int b = 1; b <= batas; b++)
	{
		for (int k = 1; k <= ((2*batas)-1); k++)
		{
			if (k == batas-(b-1) || k == batas+(b-1))
				printf ("*");
			else
				printf (" ");
		}
		
		printf ("\n");
	}
	
	for (int b = batas - 1; b >= 1; b--)
	{
		for (int k = 1; k <= ((2*batas)-1); k++)
		{
			if (k == batas-(b-1) || k == batas+(b-1))
				printf ("*");
			else
				printf (" ");
		}
			
		printf ("\n");
	}
}
