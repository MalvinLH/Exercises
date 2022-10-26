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
		
		jumlah += bil;
   }
      
   printf("Hasil jumlah = %d", jumlah);
}
