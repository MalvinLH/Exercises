#include <stdio.h>

int main() 
{
   int bil;
   int jumlah = 0;
   
   printf ("Bilangan = ");
   scanf ("%d", &bil);
   
   while (bil!=0)
   {
       bil = bil/10;
       jumlah++;
   }
   
   printf ("Jumlah digit dari inputan = %d digit", jumlah);
} 
