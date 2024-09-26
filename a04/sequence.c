////////////////////////////////////////////////////////////////////////////////
// Main File:        sequence.c
// This File:        sequence.c
// Other Files:      none
// Semester:         CS 354 Lecture 003 Fall 2024
// Grade Group:      gg17  (See canvas.wisc.edu/groups for your gg#)
// Instructor:       deppeler
// 
// Author:           Rain (Jiayu) Sun
// Email:            jsun424@wisc.edu
// CS Login:         rains
//
///////////////////////////  OPTIONAL WORK LOG  //////////////////////////////
//  Document your work sessions here or on your copy http://tiny.cc/work-log
//  Keep track of commands, structures, code that you have learned.
//  This will help you focus your review on this from each program that
//  are new to you. There is no need to submit work log.
/////////////////////////// OTHER SOURCES OF HELP ////////////////////////////// 
// Persons:          none
//
// Online sources:   none
// 
// AI chats:         none
//////////////////////////// 80 columns wide ///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>


/**
 * The main function takes in command line arguments to generate a sequence of numbers.
 * 
 * @param argc The number of command line arguments provided (should be 5, including the program name).
 * @param argv An array of strings representing the command line arguments.
 *             - argv[1]: where n is a non-zero positive number of values in the sequence
 *             - argv[2]: x0 is an integer and is the first value in the sequence
 *             - argv[3]: m is an integer and is used as a multiplier of the previous term in the sequence
 *             - argv[4]: c is an integer and is added to the (m*previous) term
 * 
 * @return Returns 1 if the incorrect number of arguments is provided, otherwise returns 0 on successful completion.
 * 
 * The program generates a sequence of numbers based on the provided start integer, multiplier, 
 * and difference. It prints the numbers, separated by commas, and ensures the last number is 
 * printed without a trailing comma.
 */
int main(int argc, char *argv[]) {
	
	// Check if the correct number of arguemnts are provided
	if (argc != 5) {
		printf("Usage: sequence num_values start_integer multiplier difference");
		return 1;	
	}
        
	// Convert command line arguments to integers
	int numValues_Int = atoi(argv[1]);
	int startInt = atoi(argv[2]);
	int multiplier_Int = atoi(argv[3]);
	int difference_Int = atoi(argv[4]);
	int result = startInt;

	// Loop to print
	for (int i = 0; i < numValues_Int; i++) {
		if (i < numValues_Int-1) {
			printf("%d,", result);
		} else {
			printf("%d", result); // Print the last number withough a comma
		}
		result = result * multiplier_Int;
		result = result  + difference_Int;
	}
        printf("\n"); // Print a newline at the end
        return 0; // Indicate that the program ended successfully
}
