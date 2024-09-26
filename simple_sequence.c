////////////////////////////////////////////////////////////////////////////////
// Main File:        simple_sequence.c
// This File:        simple_sequence.c
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

/* Main method to run the for loop to print out 1 to 10, incremented by 1 each time.
 *
 * return 0 to indicate that the program ended successfully
 */
int main() {
        // Loop through numbers 1 to 10
        for (int i = 1; i <= 10; i++) {
		if (i < 10) { 
                	printf("%d,", i); // Print each number followed by a comma
		} else {
			printf("%d", i); // Print the last number without a comma
		}
        }
        printf("\n"); // Print a newline at the end
        return 0; // Indicate that the program ended successfully
}
