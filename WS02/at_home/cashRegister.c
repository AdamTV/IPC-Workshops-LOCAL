/*
	 Name:      Adam Stinziani
	 E-mail:        astinziani@myseneca.ca
	 Student#:  124521188
	 Section:   IPC144SVV.04728.2187
*/

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:

#include <stdio.h>

int main(void) {

	double cash;
	int loonies, quarters, dimes, nickels, pennies;
	float balance, gst;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &cash);

	gst = cash * .13 + .005;

	printf("GST: $%.2f \n", gst);

	balance = cash + gst;
	printf("Balance owing: $%.2f \n", balance);

	loonies = balance / 1;
	balance = balance - loonies;
	balance = balance * 100;

	printf("Loonies required: %d, balance owing: $%1.2f \n", loonies, (float)balance / 100);

	quarters = (int)balance / 25;
	balance = (int)balance % 25;
	printf("Quarters required: %d, balance owing: $%1.2f \n", quarters, (float)balance / 100);

	dimes = (int)balance / 10;
	balance = (int)balance % 10;
	printf("Dimes required: %d, balance owing: $%1.2f \n", dimes, (float)balance / 100);

	nickels = (int)balance / 5;
	balance = (int)balance % 5;
	printf("Nickels required: %d, balance owing: $%1.2f \n", nickels, (float)balance / 100);

	pennies = (int)balance / 1;
	balance = (int)balance % 1;
	printf("Pennies required: %d, balance owing: $%1.2f \n", pennies, (float)balance / 100);

	return 0;
}
