#include "sort.h"

void bubblesort(long data[], const int n){
		bool again = true;
		for (int i = 0; i <n-1 && again; i++){
			for (int j = n-1, again = false; j > i; --j){
				if(data[j]<data[j-1]){
					swap(data[j], data[j-1]);
					again = true;
				}
			}
		}

	}
void swap(long& x, long& y) {
		long	tmp;
		tmp = x;
		x = y;
		y = tmp;
		return;
	}


void mergesort(long data[], int first, int last){
	if(first<last){
		int mid = (first + last) / 2;
		mergesort(data, first, mid);
		mergesort(data, mid+1, last);
		merge(data, first, last);
		}

	}

void merge(long array1[], int first, int last) {
		int mid = (first + last) / 2;
		int i1 = 0;
		int i2 = first;
		int i3 = mid+1;
		int size = last - first +1;
		long* temp = new long[size];

		while ((i2 <= mid )&& (i3 <= last)){
			if(array1[i2] < array1[i3]){
				temp[i1++]= array1[i2++];
			} else{
				temp[i1++] = array1[i3++];
			}
		}

		while(i2<=mid) temp[i1++] = array1[i2++];
		while(i3<=last) temp[i1++] = array1[i3++];

		for(int i = 0; i <i1; i++){
			array1[first+i]= temp[i];
		}
		delete[] temp;
}
