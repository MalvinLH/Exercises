#include<stdio.h>

int main()
{
	int b, sum = 0;

	printf("Bilangan = ");
	scanf("%d", &b);
	
	printf("Genap = ");
	
	for (int a = 1; a <= b; a++)
	{
		if(a%2==0)
		{
			sum += a;
			
			if(a==b || a==b-1)
				printf("%d = ", a);
			else
				printf("%d + ", a);
		}	
	}

	printf("%d", sum);
}
