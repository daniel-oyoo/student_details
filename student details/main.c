/* 
 * Student Record Management System
 * Main program file
 * Author: Daniel Oyoo
 * Date: 12/1/2026
 */

// Include standard input/output library for I/O functions
#include <stdio.h>

// Include custom header for display function declaration
#include "library.h"

// Define constant for maximum number of student records
#define MAX_STUDENTS 10

// Compiler directive: Pack structures without padding (saves memory)
#pragma pack(1)

/**
 * @struct student
 * @brief Structure to store student information
 * 
 * This structure holds a student's name and admission number.
 * Using #pragma pack(1) ensures no memory padding between members.
 */
struct student {
    char name[50];          // Student name with buffer limit
    int admn_no;            // Admission number
};

// Declare array of student structures
struct student co[MAX_STUDENTS];

/**
 * @brief Main function - Program entry point
 * 
 * @return int Returns 0 on successful execution
 */
int main(void) {
    int i;  // Loop counter
    
    printf("=== STUDENT RECORD MANAGEMENT SYSTEM ===\n");
    printf("Enter details for %d students:\n\n", MAX_STUDENTS);
    
    // Input loop for student records
    for(i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("----------------\n");
        
        // Get student name with safe input
        printf("Enter name: ");
        scanf("%49s", co[i].name);  // Limit input to prevent buffer overflow
        
        // Get admission number
        printf("Enter admission number: ");
        scanf("%d", &co[i].admn_no);
        
        // Clear input buffer to prevent issues with next scanf
        while(getchar() != '\n');
    }
    
    // Display all records
    printf("\n\n=== STUDENT RECORDS ===\n");
    printf("%-20s %-15s\n", "NAME", "ADMISSION NO");
    printf("%-20s %-15s\n", "--------------------", "---------------");
    
    for(i = 0; i < MAX_STUDENTS; i++) {
        display(co[i].name, co[i].admn_no);
    }
    
    printf("\nProgram completed successfully.\n");
    return 0;
}
