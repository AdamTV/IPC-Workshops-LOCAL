/*	 IPC Temperature Analyzer
	 temps.c
	 Name:      Adam Stinziani
	 E-mail:	astinziani@myseneca.ca
	 Student#:  124521188
	 Section:   IPC144SVV
	 Workshop:	WS03
*/

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:

#include <stdio.h>
#define NUMS 3

int main(void) {

	float avg, high = 0, low = 0;
	int i, hiday = 0, lowday = 0, highest = 0, lowest = 100;
	int max[NUMS];
	int min[NUMS];
	int day = 1;

	printf("---=== IPC Temperature Analyzer ===---");

	for (i = 0; i <= NUMS; i++, day++) {
		printf("\nEnter the high value for day %i: ", day);
		scanf("%i", &max[i]);
		printf("\nEnter the low value for day %i: ", day);
		scanf("%i", &min[i]);
		high += max[i];
		low += min[i];

		while (max[i] > 40 || min[i] < -40 || min[i] > max[i]) {
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			high -= max[i];
			low -= min[i];
			max[i] = 0;
			min[i] = 0;
			day--;
			i--;
			while (i < 0)
			{
				i++;	//Fixes error when entering wrong value first try
			}
		}
		if (max[i] > highest)
			hiday = i + 1;
		if (min[i] < lowest)
			lowday = i + 1;
		if (max[i] > highest)
			highest = max[i];
		if (min[i] < lowest)
			lowest = min[i];
	}
	avg = (high + low) / 8;
	printf("\nThe average (mean) temperature was: %.2f", avg);
	printf("\nThe highest temperature was %d, on day %d", highest, hiday);
	printf("\nThe lowest temperature was %d, on day %d", lowest, lowday);

	return 0;
}