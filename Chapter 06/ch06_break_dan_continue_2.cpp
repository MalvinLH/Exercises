#include <stdio.h>

int main() 
{
   int bil, jumlah = 0;
   
   while (true)
   {
   		printf ("Bilangan = ");
		scanf ("%d", &bil);
		
		if (bil == 0)
   			break;
		else if (bil % 3 == 0)
   			continue;
		
		jumlah += bil;
   }
      
   printf("Hasil jumlah bilangan bukan kelipatan 3 = %d", jumlah);
}
