#include <stdio.h>
#include <stdlib.h>

int argument();
int main() {
	
	int a, b, c, d;
	int inputUser = 0;
	printf("welcome to my stupid world, here is my menu hope to enjoy it... ");
	printf("\n1-this is for loop part...\n");
	printf("2-This is an argument part....\n");
	printf("3-I don't wanna be rude so this part is goodbye...");
	scanf("%d", &inputUser);
	switch (inputUser)
	{
	case 1:
		
		puts("insert the first number plzz");
		scanf("%d", &b);
		puts("insert the second number plzz");
		scanf("%d", &d);
		loop(b, d);
		break;
	case 2:
		
		puts("insert the first number plzz");
		scanf("%d", &a);
		puts("insert the second number plzzz");
		scanf("%d", &c);
		argument(a, c);
		break;
	case 3:
		
		bye();

	default:
		break;
	}
	//Loops
	/*int sum = 0;
	for (int i = 1; i < 101; i++)
	{

		printf("%d\n", i);
		sum = sum + i;
	}

	printf("%d\n", sum);*/
	
	//WHILE LOOPS

	/*int x = 0;

	while (x < 11) {

		printf("%d\n", x);

		x += 1;

		if (x == 5) continue;

	}*/
	//DO WHILE LOOPS

	//int x = 0;
	//do{
	//	 x += 1;
	//	 if (x == 5) break;

	//	 printf("%d", x);

	//} while (x < 11);



	system("pause");
	return 0;

}

int argument(int a,int c) {

	int total;

	total = a * c;
	printf("\n%d\n", total);


}

int loop(int b, int d) {
	int sum = 0;
	for (int i = 1; i < 101; i++)
		sum = sum + i;
	printf("%d\n", sum);
	
}

int bye() {

	printf("Hope to enjoy it bye\n");
}

