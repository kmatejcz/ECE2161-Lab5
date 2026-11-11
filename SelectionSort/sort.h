/*
 * sort.h
 *
 *  Created on: Nov 11, 2026
 *      Author: veronica-brynczka
 */

#ifndef SORT_H_
#define SORT_H_
void mergesort(long data[], int first, int last);
void merge(long array1[], int first, int last);

void bubblesort(long data[], const int n);
void swap(long& x, long& y);

void Csort(long data[], long size);
void heapsort(long data[], long root, long size);
void Dsort(long data[], long size);


#endif /* SORT_H_ */
