/**
 * @file library.c
 * @brief Implementation of display function
 */

#include <stdio.h>     // For printf function
#include "library.h"   // Include corresponding header

/**
 * @brief Implementation of display function
 * 
 * @param name Student's name
 * @param admn_no Student's admission number
 * 
 * Formats and prints student information with proper alignment.
 * Uses field width specifiers for consistent output.
 */
void display(const char name[], int admn_no) {
    // Print with formatted alignment
    // %-20s: Left-aligned string in 20-character wide field
    // %-15d: Left-aligned integer in 15-character wide field
    printf("%-20s %-15d\n", name, admn_no);
}
