/**
 * @file library.h
 * @brief Header file for Student Record System
 * 
 * Contains function declarations and header guards to prevent multiple inclusions.
 */

#ifndef LIBRARY_H      // Header guard start - prevents multiple inclusions
#define LIBRARY_H      // Define LIBRARY_H symbol

/**
 * @brief Displays student information in formatted output
 * 
 * @param name Character array containing student name
 * @param admn_no Integer containing admission number
 * 
 * This function prints student details in a consistent format.
 * The name is left-aligned in a 20-character field.
 */
void display(const char name[], int admn_no);

#endif /* LIBRARY_H */  // Header guard end
