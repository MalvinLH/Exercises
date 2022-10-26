#include<stdio.h>
int main ()
{
	int u;
	printf("Usia = ");
	scanf("%d", &u);
	
	if(u>=0&&u<=4)
		printf("Kategori Balita");
	else if(u>=5&&u<=12)
		printf("Kategori Anak");
	else if(u>=13&&u<=19)
		printf("Kategori Remaja");
	else if(u>=20&&u<=59)
		printf("Kategori Dewasa");
	else if(u>=60)
		printf("Kategori Lansia");
}
