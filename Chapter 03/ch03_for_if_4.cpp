/* Programmer: Malvin Leonardo Hartanto
 * Find the factors, total of factors, and check if the inputted integer is a prime number or not.
*/

#include<stdio.h>

int main()
{
	int b, total = 0;

	printf("Bilangan = ");
	scanf("%d", &b);
	
	printf("Faktornya = ");
	
	for (int a = 1; a <= b; a++)
	{
		if (b%a==0)
		{
			printf("%d ", a);
			total = total + 1;
		}
	}
	
	printf("\nJumlah faktornya = %d angka\n", total);
	
	if(total==2)
		printf("Prima");
	else
		printf("Bukan prima");
}
