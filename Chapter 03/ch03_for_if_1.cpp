#include<stdio.h>

int main()
{
	printf("Batas = ");
	int b;
	scanf("%d", &b);
	
	for (int a = 1; a <= b; a++)
	{
		if(a%2!=0)
			printf("%d", a);
		else
			printf(" # ");
	}
}
