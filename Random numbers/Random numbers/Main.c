#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

void print1() {

	puts(" _________");
	puts("| |");
	puts("| |");
	puts("| o |");
	puts("| |");
	puts("|_________|");

}

void print2() {

	puts(" _________");
	puts("| |");
	puts("| o |");
	puts("| |");
	puts("| o |");
	puts("|_________|");

}

void print3() {

	puts(" _________");
	puts("| |");
	puts("| o |");
	puts("| o |");
	puts("| o |");
	puts("|_________|");

}


void print4() {

	puts(" _________");
	puts("| |");
	puts("| o o |");
	puts("| |");
	puts("| o o |");
	puts("|_________|");

}

void print5() {

	puts(" _________");
	puts("| |");
	puts("| o o |");
	puts("| o |");
	puts("| o o |");
	puts("|_________|");

}

void print6() {

	puts(" _________");
	puts("| |");
	puts("| o o |");
	puts("| o o |");
	puts("| o o |");
	puts("|_________|");

}



int main() {

	print1();
	print2();
	print3();
	print4();
	print5();
	print6();


	//6 SIDES DICE
	//srand(time(NULL));
	//for (int i = 0; i < SIZE; i++)
	//{
	// int roll = 1 + (rand()%6);
	// printf("%d\n", roll);
	//}


	//CHECKING RANDOMICITY 



	int Random[7] = { 0 }; // This will initialize all the elements as zero, avoiding errors Ex: {0, 0, 0, 0, 0, 0, 0};

	//THIS LOOP WILL TELL HOW MANY TIMES A NUMBER FROM 1 TO 6 WAS CALLED BY THE RAND AFTER 1000 ROLLS 


	for (size_t i = 0; i < 1000; i++)
	{
		unsigned int roll = 1 + (rand() % 6);

		switch (roll)
		{

		case 1:
			Random[1]++;

			break;


		case 2:

			Random[2]++;
			break;

		case 3:


			Random[3]++;
			break;

		case 4:

			Random[4]++;
			break;

		case 5:


			Random[5]++;
			break;


		case 6:


			Random[6]++;
			break;



		default:
			break;
		}


	}//for ends

	//loop to print all array elements - This is the only way to print an array in C


	printf("%d\t%d\t%d\t%d\t%d\t%d\t\n", 1, 2, 3, 4, 5, 6);
	for (int i = 1; i < sizeof(Random) / sizeof(Random[0]); i++) //THE LOOP STARTS WITH ONE BECAUSE I'M SKIPPING THE ELEMENT 0.
	{
		printf("%d\t", Random[i]);
	}












	system("pause");
	return 0;
}

