#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void pyramid();
void menu();
void fibo();
void dice();

int main()
{

	dice();
	/*menu();*/
		system("pause");
		return 0;
	}


void pyramid() {


	for (int i = 1; i < 11; i++) {

		printf("%d %t", i);
		for (int b = 1; b <= i; b++) {

			printf("* %t");
		}
		printf("\n");
	}
	for (int c = 10; c >= 1; c--) {

		printf("%d %t", c);
		for (int d = 1; d <= c; d++) {

			printf("* %t");
		}
		printf("\n");
	}
}

void fibo() {
	int a = 0, b = 1, c, n;
	printf("Enter your number plzz\n");
	scanf("%d", &n);
	
	{
		printf("your number is in a fibonacci series\n");
		return 0;
	}
	while (1)
	{
		c = a + b;
		a = b;
		b = c;
		printf("\t%d", c);
		if (c == n)
		{
			printf("\nYour number is in a Fibonacci sequence\n");
			break;
		}
		if (c > n)
		{
			printf("\nYour number is not in a Fibonacci sequence\n");
			break;
		}
	}
}

void dice() {
	
	int Random[13] = { 0 }; 




	for (size_t i = 0; i < 101; i++)
	{
		unsigned int roll = 2 + (rand() % 12);

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

		case 7:
			Random[7]++;
			break;

		case 8:
			Random[8]++;
			break;

		case 9:
			Random[9]++;
			break;

		case 10:
			Random[10]++;
			break;

		case 11:
			Random[11]++;
			break;

		case 12:
			Random[12]++;
			break;



		default:
			break;
		}


	}



	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", 1, 2, 3, 4, 5, 6,7,8,9,10,11,12);
	for (int i = 1; i < sizeof(Random) / sizeof(Random[0]); i++) 
	{
		printf("%d\t", Random[i]);
	}

}


//void menu() {

	/*int userInput;


	printf("__________________________________________________________________________ ");
	printf("\n1- Pyramid\n");
	printf("2- fibonacci\n");
	printf("3- This is for a stupid part...\n");
	printf("4- Bye\n");
	printf("__________________________________________________________________________ ");
	scanf("%d", &userInput);
	



	switch (userInput)
	{
	case 1:
		pyramid();
		menu();

	case 2:
		fibo();
		menu();

	case 3:
		stupid();
		menu();
	case 4:
		bye();
		break;
	default:
		break;
	}
}*/









	
