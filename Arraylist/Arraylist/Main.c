#include <stdio.h>
#include <stdlib.h>
#include "Portotype.h"

int main() {

	int a[] = { 0,1,2,3,4,5 };
	int sizeOfarrayA = sizeof(a) / sizeof(a[0]);

	int b[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int sizeOfarrayB = sizeof(b) / sizeof(b[0]);



	printArray(a, sizeOfarrayA);
	printArray(b, sizeOfarrayB);

	

	system("pause");
	return 0;
}