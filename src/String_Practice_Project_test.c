/*
 ============================================================================
 Name        : String_Practice_Project.c
 Author      : Jeremy Evert
 Version     :
 Copyright   : BSD
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char prompt[] = "Greetings Human!";
	char first[300];
	printf(prompt);
	puts("Greetings, Human!"); /* prints Greetings, Human! */
	puts("Please enter 3 sentances seperated by period and end with an enter strike");
	gets(first);
	//scanf("%300s", first);
	printf("Thank you for your three sentances, %s.\n", first);
	return EXIT_SUCCESS;
}
