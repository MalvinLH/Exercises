#include<stdio.h>
int main ()
{
	int bil, digit;
	
	printf("Bilangan = ");
	scanf("%d", &bil);
	
	digit = bil%10;
	
	if(digit%4 == 0)
		printf("Digit terakhir kelipatan 4");
	else
		printf("Digit terakhir bukan kelipatan 4");
}
