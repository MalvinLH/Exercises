/* Programmer: Malvin Leonardo Hartanto
 * Generating Random Numbers, then find the maximum number (max 20), minimum number (min 1), and average value.
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int batas, maks = 0, min = 20;
	float rata_rata = 0;
	
	printf("Batas = ");
	scanf("%d", &batas);
	
	int arr[batas];
	srand(time(NULL));
	for(int a = 0; a <= batas-1; a++)
	{
		int random = rand()	% 20 + 1;
		arr[a] = random;
		printf("%d ", arr[a]);
		
		rata_rata = rata_rata + arr[a];
		
		if(maks < arr[a])
			maks = arr[a];
		if(min > arr[a])
			min = arr[a];
	}
	
	rata_rata = rata_rata/batas;
	
	printf("\nmaksimal = %d", maks);
	printf("\nminimal = %d", min);
	printf("\nrata-rata = %.2f", rata_rata);
}
