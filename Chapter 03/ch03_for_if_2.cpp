#include<stdio.h>

int main()
{
	int b, sum = 0;

	printf("Batas = ");
	scanf("%d", &b);
	
	for (int a = 1; a <= b; a++)
	{
		sum += a;
		
		if(a==b)
			printf("%d = ", a);
		else
			printf("%d + ", a);
	}
	
	printf("%d", sum);
}
