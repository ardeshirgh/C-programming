#include <stdio.h>
#include <stdlib.h>
#include "Portotype.h"


void printArray(int arr[], int size) {

	puts("Array printed");

	for (size_t i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}

	puts("");
}
