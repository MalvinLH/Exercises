#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int batas, data;
	bool ada = false;
	
	printf("Batas = ");
	scanf("%d", &batas);
	
	int arr[batas];
	srand(time(NULL));
	for(int a = 0; a <= batas-1; a++)
	{
		int random = rand()	% 20 + 1;
		arr[a] = random;
		printf("%d ", arr[a]);
	}
	
	printf("\nData yang mau dicari = ");
	scanf("%d", &data);
	
	for(int a = 0; a <= batas-1; a++)
	{
		if(data == arr[a])
		{
			ada = true;
			printf ("Ketemu di posisi ke - %d\n", a+1);
		}
	}
	
	if(ada == false)
		printf("Tidak ketemu");
}
