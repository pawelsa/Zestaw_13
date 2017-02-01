#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmpfunc(const void * a, const void * b)
	{
		return (*(int*)a - *(int*)b);
	}

int main() {

	// 1	//Write a program generating 6 random numbers of a lottery drawing(6 of 49).Run it twice.

	/*
	srand(time(NULL));
	int tab[1][6];
	//rand() % 50

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++)
			tab[i][j] = rand() % 50;
	}
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++)
			printf("%4.d", tab[i][j]);
		printf("\n");
	}
	*/

	// 2	//Write a program reading 5 integers into an array and sorting them using the qsort() function.
	
	/*
	int values[5];
	
	for (int i = 0; i < 5; i++) {
		printf("Enter %d value : ", (i + 1));
		scanf_s("%d", &values[i]);
	}

	int n;

	printf("Before sorting the list is: \n");
	for (n = 0; n < 5; n++)
	{
		printf("%d ", values[n]);
	}

	qsort(values, 5, sizeof(int), cmpfunc);

	printf("\nAfter sorting the list is: \n");
	for (n = 0; n < 5; n++)
	{
		printf("%d ", values[n]);
	}
	*/

	// 3	//Read another, sixth integer from the user and check whether it is one of these five.Use bsearch() on a sorted array.





	// 4	//Check, how many floating - point multiplications the computer performs in a second.
			//Hint: multiply random numbers for a given amount of time : wait, until time() changes, 
			//then multiply numbers until it changes again(which should happen in one second).
			//Second hint : check, how long does it take to execute an empty loop and don’t take this time into account – measure only the time of multiplications.Repeat the measurement with divisions.
	return 0;
}