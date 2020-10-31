/* SYSC 2006 Lab 3. 
 * Vimal Gunasegaran
 * 101155249
 */

#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "exercises.h"

/* Exercise 1. */

/* Return the average magnitude of the n doubles in x[]. 
 * This function assumes that parameter n is >= 1.
 */
double avg_magnitude(double x[], double n)
{
    double magnitude;
    double total = 0;

	for(int i = 0; i < n; i++){
		total += fabs(x[i]);
	}
    magnitude = total/n;

	return magnitude;
}

/* Exercise 2. */

/* Return the average power of the n doubles in x[].
 * This function assumes that parameter n is >= 1.
 */
double avg_power(double x[], double n)
{
	double avg = 0;
	double power;

	for(int i = 0; i < n; i++){
		avg += pow(x[i],2);
	}
	power = avg/n;

    return power;
}

/* Exercise 3. */

/* Return the largest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double max(double arr[], int n)
{
	double val = arr[0];
	for(int i = 0; i < n; i++){
		if(val < arr[i]){
			val = arr[i];
		}
	}

    return val;
}

/* Exercise 4. */

/* Return the smallest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double min(double arr[], int n)
{
	double val = arr[0];
	for(int i = 0; i < n; i++){
		if(val > arr[i]){
			val = arr[i];
		}
	}

	return val;
}

/* Exercise 5. */

/* Normalize the n doubles in x[]. 
 * This function assumes that parameter n is >= 2, and that at least
 * two of the values in x[] are different.
 */
void normalize(double x[], int n)
{
	double numMax = max(x,n);
	double numMin = min(x,n);

	for(int i = 0; i < n; i++){
		x[i] = (x[i] - numMin)/(numMax - numMin);
	}
	return;
}
