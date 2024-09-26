////////////////////////////////////////////////////////////////////////////////
// Main File:        cla_sequence.c
// This File:        cla_sequence.c
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

/* Main method to run the cla_sequence.c
 * This program accepts two command-line arguments: a start and an end integer.
 * It prints all integers from start to end inclusively in a comma-separated 
 * sequence.
 *
 * @param argc The number of arguments passed via the command line 
 * @param argv An array of strings representing the arguments. argv[0] is the 
 * program name, argv[1] is the start integer, and argv[2] is the end integer.
 * 
 * return 0 to indicate that the program ended successfully; 1 if incorrect 
 * arguments are provided or if the start int is less than end int
 */
int main(int argc, char *argv[]) {
	// Check if the correct number of arguemnts are provided
	if (argc != 3) {
		printf("Usage: cla_sequence start_integer end_integer where start is less than end");
		return 1;	
	}
        
	// Convert command line arguments to integers
	int startInt = atoi(argv[1]);
	int endInt = atoi(argv[2]);

	// Check if the start is less than the end
	if (startInt >= endInt) {
		printf("Usage: cla_sequence start_integer end_integer where start is less than end");
		return 1;
	}

	// Loop through numbers from start to end
	for (int i = startInt; i <= endInt; i++) {
		if (i < endInt) {
			printf("%d,", i);
		} else {
			printf("%d", i); // Print the last number withough a comma
		}
	}
        printf("\n"); // Print a newline at the end
        return 0; // Indicate that the program ended successfully
}
