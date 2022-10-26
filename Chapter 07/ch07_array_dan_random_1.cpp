#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int batas;
	
	printf ("Batas = ");
	scanf ("%d", &batas);
	
	int arr [batas];
	srand (time(NULL));
	for(int a = 0; a <= batas-1; a++)
	{
		int random = rand()	% 20 + 1;
		arr [a] = random;
		printf ("%d ", arr [a]);
	}
	
	printf("\n\nReverse = ");
	for(int a = batas-1; a >= 0; a--)
	{
		printf ("%d ", arr [a]);
	}
}
