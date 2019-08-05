This project is developed by Monib Saadi as part of an online course offered by University of Colorado Boulder. 
The project contains two files:
stats.h
stats.c

stats.h file contains all the function declarations to perform certain statistical analysis of an array. The definitions inlcude:
print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
print_array() - Given an array of data and a length, prints the array to the screen
find_median() - Given an array of data and a length, returns the median value
find_mean() - Given an array of data and a length, returns the mean
find_maximum() - Given an array of data and a length, returns the maximum
find_minimum() - Given an array of data and a length, returns the minimum
sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )

stats.c file contains the actual program written in C language with all the function definitions including main function.

The functions are developed for array containing integer elements. For sorting the array, bubble sort algorithm is used with O(n^2) time complexity. 
