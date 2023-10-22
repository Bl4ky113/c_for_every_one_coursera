/* 
	Description: Calculate Elephant Seal's Average Height with a given list of Elephant Seals' height
	Compiler: GCC
	Created: 2023/10/22
*/

#include <stdio.h> // I/O
#include <stdlib.h> // Files Usage

#define ELEPHANT_DATA_SIZE 1024

int main (void) {
	int elephant_heights[ELEPHANT_DATA_SIZE]; // Variable to store the heights
	FILE *heights_file; // File Variable
	int heights_sum = 0; 
	int number_elephants = 0; // Number of elephants
	double heights_average = 0.0; 

	heights_file = fopen("./elephant_data.txt", "r"); // Open File with the elephant_data

	// Checks if the file exists, if it doesn't Exit with an error;
	if (heights_file == NULL) {
		printf("ERROR: 'elephant_data.txt' not found");
		return 1;
	}

	// Reads the content of the file until a 0, null or EOF.
	for (int i = 0; i < ELEPHANT_DATA_SIZE; i++) {
		fscanf(heights_file, "%d ", &elephant_heights[i]);

		if (elephant_heights[i] == 0) {
			break;	
		}
	}

	// Add and count all the Elephant Heights Values
	for (int i = 0; i < ELEPHANT_DATA_SIZE; i++) {
		if (elephant_heights[i] == 0 ) {
			break;
		}

		heights_sum += elephant_heights[i];
		++number_elephants;
	}

	// Calculate the height average of the Elephants
	heights_average = heights_sum / (number_elephants + 0.0); // + 0.0 to force double division

	// Print the Result
	printf("Elephant Seals Average Height:\t%.2lf", heights_average);

	fclose(heights_file); // Close the File to avoid storage and memory problems
	return 0;
}
