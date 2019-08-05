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
 * @file stats.c 
 * @brief This file inlcudes a C program written to perform certain statistics on an array. 
 *
 * The program includes functions performing statistics on a given array. The functions defined in
 * the program are:
main() - The main entry point for your program
print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
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



#include <stdio.h>
#include "stats.h"
#include <stdlib.h>
#include <string.h>


/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test);
  print_array(test);
  sort_array(test,40);
}


void print_statistics(unsigned char *arr){
unsigned int total;
unsigned int median_index;
float mean;
unsigned int max = *(arr);
unsigned int min = *(arr);
total = max;
for(int i=1; i < SIZE; i++){
	total = total + *(arr+i);
	if(*(arr+i) > max) max = *(arr+i);
}
for(int i=1; i < SIZE; i++){
	if(*(arr+i) < min) min = *(arr+i);
}
mean = (float) max/SIZE;
median_index = SIZE/2;
printf("The maximum number of array is %d\n",max);
printf("The minimum number of array is %d\n",min);
printf("The mean number of array is %.2lf\n",mean);
printf("The median number of array is %d\n",*(arr+median_index-1));
}


void print_array(unsigned char *arr){
printf("The input is array is: ");
for(int i=0; i < SIZE; i++){
	printf("%d ",*(arr+i));
}
printf("\n");
}


unsigned int find_median(unsigned char *arr,int length){
unsigned int median_index;
if(length%2 ==0){
	median_index = length/2;
	return *(arr+median_index-1);
}
else{
	median_index = (length+1)/2 - 1;
	unsigned int median_index2 = median_index +1;
	return *(arr+median_index),*(arr+median_index2);
}
}


float find_mean(unsigned char *arr,int length){
int total = 0;
float mean;
for(int i=0; i < length; i++){
	total = total + *(arr+i);
}
return mean = (float) total/length;
}


unsigned int find_maximum(unsigned char *arr,int length){
unsigned int max = *(arr);
for(int i=1; i < length; i++){
	if(*(arr+i) > max) max = *(arr+i);
}
return max;
}


unsigned int find_minimum(unsigned char *arr,int length){
unsigned int min = *(arr);
for(int i=1; i < length; i++){
	if(*(arr+i) < min) min = *(arr+i);
}
return min;
}


void swap(unsigned char *xp, unsigned char *yp) 
{ 
unsigned char temp = *xp; 
*xp = *yp; 
*yp = temp; 
} 



void sort_array(unsigned char *arr,int length)
{ 
int i, j; 
for (i = 0; i < length-1; i++)       
	for (j = 0; j < length-i-1; j++)  
        	if (*(arr+j) < *(arr+j+1)) 
                	swap((arr+j), (arr+j+1));
printf("The sorted array is: ");
for (i = 0; i < length; i++) 
	printf("%d ", *(arr+i));
printf("\n"); 
} 
 

