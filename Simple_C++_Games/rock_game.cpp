/* Programmer: Malvin Leonardo Hartanto */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void instruksi();

int main()
{
	printf("\tROCK GAME\n\n");
	instruksi();
	printf("Pilih giliran\n");
	printf("1. Computer mulai dulu.\n2. Anda mulai dulu.\n");
	
	int pilihan=0;
	while ( pilihan < 1 || pilihan > 2)
	{
		printf("Pilihan Anda = ");
		scanf("%d", &pilihan);	
		if ( pilihan < 1 || pilihan > 2)
		{
			printf("Inputan tidak valid\n");
		}
	}
	
	srand(time(NULL));
	int batu = 4 * (rand() % 11 + 5);
	//refactoring = menyederhanakan code
	if(pilihan == 1)
		batu = batu + (rand() % 3 + 2);
	else if(pilihan == 2)
		batu++;
	
	printf("Jumlah batu yang disediakan = %d\n", batu);
	
	while (batu > 0)
	{
		int ambil = 0;
		if(pilihan == 1)
		{
			if(batu % 4 == 2)
				ambil = 1;
			else if(batu % 4 == 3)
				ambil = 2;
			else if(batu % 4 == 0)
				ambil = 3;
				
			printf("\nJumlah yang diambil komputer = %d\n", ambil);
			pilihan = 2; //supaya next loop, gantian human yang ambil
		}
		else
		{
			while( ambil < 1 || ambil > 3 || ambil > batu)
			{
				printf("\nJumlah batu yang Anda ambil = ");
				scanf("%d", &ambil);
				
				if( ambil < 1 || ambil > 3 || ambil > batu)
				{
					printf("Inputan tidak valid\n");
				}
			}
			pilihan = 1; //supaya next loop, gantian comp yang ambil
		}
		batu = batu - ambil;
		printf("Sisa batu sekarang = %d\n", batu);
	}
	printf("Computer Win\n");
	
	return 0;
}

void instruksi()
{
	printf("Pada game ini, Anda akan bermain dengan computer.\nNamun, Anda tidak akan dapat memenangkan game ini.\n");
	printf("Jumlah batu yang dapat diambil hanya antara 1-3. \nSelamat bermain!\n\n");
}
