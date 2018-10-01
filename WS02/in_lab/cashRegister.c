/*
	 Name:      Adam Stinziani
	 E-mail:    astinziani@myseneca.ca
	 Student#:  124521188
	 Section:   IPC144SVV.04728.2187
*/

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:

#include <stdio.h>

int main(void) {

	double cash;
	int loonies, quarters;
	float balance;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &cash);

	loonies = cash / 1;
	balance = cash - loonies;

	printf("Loonies required: %i, balance owing $%.2f", loonies, balance);

	quarters = balance / 0.25;
	balance -= quarters * 0.25;
	printf("\nQuarters required: %i, balance owing $%.2f\n", quarters, balance);

	return 0;
}
