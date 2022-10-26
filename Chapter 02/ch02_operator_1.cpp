#include<stdio.h>

int main()
{
	printf("Detik = ");
	int d;
	scanf("%d", &d); //4501
	
	int j = d / 3600 ; // 1
	d = d % 3600; // 901
	
	int m = d / 60; //15
	d = d % 60;  //1
	
	printf("%d jam %d menit %d detik", j, m ,d);
}
