#include<stdio.h>

int main()
{
	printf("Batas = ");
	int b;
	scanf("%d", &b);
	
	for (int a = 1; a <= b; a++)
		printf("%d. Puede\n", a);
		
	//kalau naik, int dalam for selalu angka kayaknya.
}
