#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
	int batas;
	printf("Batas = ");
	scanf("%d", &batas);
	
	int arr[batas];
	srand(time(NULL));
	for(int a = 0; a <= batas-1; )
	{
		int random = rand() % 20 + 1;
		
		bool ada = false;
		
		for(int b = 0; b <= batas-1; b++)
		{
			if(random == arr[b])
				ada = true;
		}
		
		if (ada == false)
			{
				arr [a] = random;
				printf("%d ", arr[a]);
				a++;
			}
	}
}
