#include <stdio.h> //starndard input and output header printf and scanf
#include <stdlib.h> //system('pause')

void ageAndName();
void Hello();  //FUNCTION PROTOTYPE	

int main() {  //This is a Main function, where all code will run   
	//ctrl + k + c = comment / ctrl + k + u = uncomment

	//------------------------------ how to ask something from the user ----------------------
	//printf for output and scanf is for input

	char yourName[20]; //the last charecter is belong the new charecter 

	//printf("what is your name\n");
	//scanf("%s", &yourName); //%s represent the string
	//printf("Hello %s\n", &yourName);

	//------------------------------ how to ask something from the user ----------------------


	//--------------------- strcpy STDIO --------------------------
	//asign the arry and run as a string

	/*strcpy(yourName, "Hello Ardeshir");
	printf("%s\n", yourName);*/

	//--------------------- strcpy STDIO --------------------------


	//--------------------- DATA TYPE --------------------------

	//int number = 10; //Type integer 32bit data including negative
	//char initial = 'a'; //Single charecter indicated always with single quotation
	//float pi = 3.14; //This is for real numbers - 32bit data
	//double coffee = 2.55; //This is real numbers 64bit data
	////%d declare the integer
	////%c declare char
	////%f declare float
	////%lf declare double 
	//printf("My integer is %d My char is %c My float is %.2f My double is %.2lf",number, initial, pi, coffee);
	//puts("");//Jump to the next line

	//printf("The size of my number is %zu bytes\n", sizeof(number));
	//printf("The size of my initial is %zu bytes\n", sizeof(initial));
	//printf("The size of my pi is %zu bytes\n", sizeof(pi));
	//printf("The size of my coffe is %zu bytes\n", sizeof(coffee));

	////--------------------- DATA TYPE --------------------------

	////---------------------- FORMATING OUTPUT ----------------
	//printf("This \t is\t tab\n"); //TAB
	//printf("This is backspace\b\a\n"); //backspace
	//printf("This is alert sound\a\n"); //ALERT!!

	//printf("Hello World\n");

	//------------------------------ CALL THE FUNCTION IN THE MAIN ------------------

	Hello();
	ageAndName();


	system("pause");

	return 0;

	

}

void Hello() {   //function declaration

	puts("Hi, I'm a function");
}


void ageAndName() {  //First thing and i was awful on it fuuuuuck

	char yourName[20];
	int yourAge;

	printf("what is your name ?\n");
	scanf("%s", &yourName);

	printf("How old are you ?\n");
	scanf("%d", &yourAge);

	printf( "hi your name is %s and you are %d years old", yourName, yourAge);
	puts("");
}
