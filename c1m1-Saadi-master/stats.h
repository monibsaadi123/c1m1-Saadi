/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief This header file includes certain function declarations, defined in stats.c file.
 *
 * 8 function declarations are included in this file. Including: 
print_statistics() - A function that prints the statistics of an array including minimum, 	    maximum, mean, and median.
print_array() - Given an array of data and a length, prints the array to the screen
find_median() - Given an array of data and a length, returns the median value
find_mean() - Given an array of data and a length, returns the mean
find_maximum() - Given an array of data and a length, returns the maximum
find_minimum() - Given an array of data and a length, returns the minimum
sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.)
 
 * @author Monib Saadi
 * @date 04/08/2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief This function prints maximum, minimum, mean and median value of input array.
 *
 * This functions takes an array as input. It will find the maximum and minimum value of array.
 * It will also compute the mean and median of the array.
 *
 * @param The array on which operations are to be performed
 *
 * @return Void return type. It will print the values on the screen
 */
void print_statistics(unsigned char *);

/**
 * @brief This function prints all the elements of the array on the screen.
 *
 * This functions takes an array as input. Run a for loop to access and print the values to screen.
 * 
 *
 * @param The array on which operations are to be performed
 *
 * @return Void return type. It will print the values on the screen
 */
void print_array(unsigned char *);

/**
 * @brief This function returns the median of the input array.
 *
 * This functions takes an array as input. Compute the median of the array.
 * 
 *
 * @param The array on which operations are to be performed
 *
 * @return unsigned Int return type i.e Median
 */
unsigned int find_median(unsigned char *,int);

/**
 * @brief This function returns the mean of the input array.
 *
 * This functions takes an array as input. Compute the mean of the array.
 * 
 *
 * @param The array on which operations are to be performed
 *
 * @return float return type i.e Mean
 */
float find_mean(unsigned char *,int);

/**
 * @brief This function returns the maximum element of the input array.
 *
 * This functions takes an array as input. Returns the maximum element of the array.
 * 
 *
 * @param The array on which operations are to be performed
 *
 * @return int return type i.e Maximum
 */
unsigned int find_maximum(unsigned char *,int);

/**
 * @brief This function returns the minimum element of the input array.
 *
 * This functions takes an array as input. Returns the minimum element of the array.
 * 
 *
 * @param The array on which operations are to be performed
 *
 * @return int return type i.e Minimum
 */
unsigned int find_minimum(unsigned char *,int);

/**
 * @brief This function sorts the input array in descending order. The elements of array should be
 * integers.
 *
 * This functions takes an array as input. Apply bubble sort algorithm on the array.
 * 
 *
 * @param The array on which operations are to be performed
 *
 * @return void return type. It just sorts the array.
 */
void sort_array(int *,int);

/**
 * @brief This function swap two values.
 *
 * This functions takes two inputs and swap the values of variables.
 * 
 *
 * @param Two input values in int form.
 *
 * @return void return type. It just sorts the array.
 */
void swap(int *,int *);



#endif /* __STATS_H__ */
