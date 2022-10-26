#include <stdio.h>

int main() 
{
   int angka;
      
   while (angka % 2 == 0)
   {
   		printf ("Masukkan angka ganjil = ");
   		scanf ("%d", &angka);
   	
   		if (angka % 2 == 0)
   			printf ("Inputan Salah !\n");
   }
   
   for (int b = 1; b <= angka; b++)
   {
   		for (int k = 1; k <= angka; k++)
   		{
			if (b == 1 || b == angka || k == (angka+1)/2)
				printf ("*");
			else
				printf (" ");
		}
		
		printf ("\n");
   }
} 
