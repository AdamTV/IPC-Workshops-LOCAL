//--------------------------------------------------
// Name:			Adam Stinziani 
// Student Number:  124521188
// Email:           astinziani@myseneca.ca
// Section:			IPC144SVV
// Workshop:		04-in_lab
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
#include <stdio.h>

int main(void) {

	int i, days = 0, high[10], low[10];

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);

	while (days < 3 || days > 10) {
		printf("\nInvalid entry, please enter a number between 3 and 10, incusive: ");
		scanf("%d", &days);
	}
	printf("\n");
	for (i = 0; i < days; i++) {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);
	}
	printf("Day Hi Low\n");
	for (i = 0; i < days; i++) {
		printf("%d   %d   %d\n", i + 1, high[i], low[i]);
}
	return 0;
}