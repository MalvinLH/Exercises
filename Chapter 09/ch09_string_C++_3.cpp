#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

/* Programmer: Malvin Leonardo Hartanto
 * Simple Song Shuffler
*/

int main()
{
	string song[11];
	song[1] = "Smooth Criminal - Michael Jackson";
	song[2] = "Imagine - John Lennon";
	song[3] = "Counting Stars - OneRepublic";
	song[4] = "Believer - Imagine Dragons";
	song[5] = "Superheroes - The Script";
	song[6] = "Boulevard of Broken Dreams - Green Day";
	song[7] = "Gone, Gone, Gone - Phillip Phillips";
	song[8] = "I'm Yours - Jason Mraz";
	song[9] = "Sweet Child O' Mine - Guns N' Roses";
	song[10] = "Smoke on the Water - Deep Purple";
	
	cout << "Song List : \n";
	for (int a = 1; a <= 10; a++)
		cout << a << ". " << song[a] << '\n';
	
	cout << "\nShuffle List : \n";
	
	int data[11];
	for (int b = 0; b <= 10; b++)
		data[b] = 0;

	srand(time(NULL));
	for (int c = 1; c <= 10;)
	{
		int random = rand() % 10 + 1;
		if (data[random] == 0)
		{
			cout << c << ". ";
			cout << song[random] << '\n';
			c++;
			data[random] = 1;
		}
	}
}
