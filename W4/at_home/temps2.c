//--------------------------------------------------
// Name:			Adam Stinziani 
// Student Number:  124521188
// Email:           astinziani@myseneca.ca
// Section:			IPC144SVV
// Workshop:		04-at_home
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
#include <stdio.h>

int main(void) {

	int i, x = 0, days = 0, high[10], low[10];
	int max = 0, min = 10, maxday, minday;
	float avg = 0, l = 0, h = 0; // used to find avg

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);

	while (days < 3 || days > 10) {
		printf("\nInvalid entry, please enter a number between 3 and 10, incusive: ");
		scanf("%d", &days);
	}
	printf("\n");	//to match matrix output
	for (i = 0; i < days; i++) {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);
		if (high[i] > max)
			max = high[i];
		maxday = i + 1;
		if (low[i] < min);
		min = low[i];
		minday = i + 1;
	}
	printf("\nDay  Hi  Low\n");
	for (i = 0; i < days; i++) {
		printf("%d    %d    %d\n", i + 1, high[i], low[i]);
	}
	printf("\nThe highest temperature was %d, on day %d\n", max, maxday);
	printf("The lowest temperature was %d, on day %d\n", min, minday);

	do {
		printf("\nEnter a number between 1 and 4 to see the average temperature ");
		printf("for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &x);

		while (x > -1 && x != 1 && x != 2 && x != 3 && x != 4) {	//logic had me like 
			printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d", &x);
		}
		if (x > 1 && x < 4)
		{
			for (i = 0; i < x; i++) {
				l += low[i];
				h += high[i];
				avg = (l + h) / (x * 2);
			}
			printf("\nThe average temperature up to day %d is: %.2f\n", x, avg);
			l = 0, h = 0;
		}
			} while (x > -1);
			printf("\nGoodbye!\n");
	
	return 0;
}
