#include<stdio.h>
//siap dibenerin dari code pak jimmy
int main()
{
	int batas, s=1, sb=0, b, total;
	
	printf("Batas = ");
	scanf("%d", &batas);
	
	for (int a = 1; a <= batas; a++)
	{
		printf("%d ", s);
		b = s + sb;
		sb = s;
		s = b;
		total=total+sb;
		
		if(batas==a)
			printf("= %d", total);
		else
			printf("+ ");
	}
}
