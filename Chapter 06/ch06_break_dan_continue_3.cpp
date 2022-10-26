#include <stdio.h>

int main() 
{
   int bil1, bil2, jumlah = 0;
   
   while (true)
   {
   		printf ("Bilangan 1 = ");
		scanf ("%d", &bil1);
		
		printf ("Bilangan 2 = ");
		scanf ("%d", &bil2);
		
		if (bil1 == 0 && bil2 == 0)
		{
   			printf("Terima kasih.");
   				break;
		}
   			
		jumlah += (bil1 + bil2);
		
		printf("Total = %d\n\n", jumlah);
			
		jumlah = 0;
   }
}
