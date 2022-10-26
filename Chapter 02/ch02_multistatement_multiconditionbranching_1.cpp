#include<stdio.h>
int main ()
{
	int bil1, bil2, bil3;
	printf("Bilangan 1 = ");
	scanf("%d", &bil1);
	printf("Bilangan 2 = ");
	scanf("%d", &bil2);
	
	if(bil1%5==0 && bil2%5==0){
		printf("Swap\n");
		bil3=bil1;
		bil1=bil2;
		bil2=bil3;
		printf("Bilangan 1 = %d\n", bil1);
		printf("Bilangan 2 = %d\n", bil2);
	}else
	printf("NO SWAP");

}
