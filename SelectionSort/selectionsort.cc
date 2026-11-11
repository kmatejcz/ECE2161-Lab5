#include "sort.h"

void Csort(long data[], long size){

	long minIndex;
	for(long i = 0; i < size -1; i++){
		minIndex = i;

		//finding the smallest element in the unsorted portion
		for(long j = i + 1; j < size; j++){

			if(data[j] < data[minIndex]){
				minIndex = j;
			}
		}
		//placing the smallest element in the correct place
		if(minIndex != i){
			swap(data[i], data[minIndex]);
		}
	}
}


void heapsort(long data[], long root, long size){
	long value;

	while(2*root + 1 < size){
		value = 2*root + 1;

		//finding the larger value
		if(value + 1 < size && data[value] < data[value + 1]){
			value++;
		}
		//stop if the root is larger than its 'children'
		if(data[root] >= data[value]){
			break;
		}

		//swap the root with its larger 'child'
		swap(data[root], data[value]);
		root = value;
	}
}

void Dsort(long data[], long size){

	//building max heap
	for(long i = size/2; i > 0; i--){
		heapsort(data, i - 1, size);
	}

	//moving the largest value to the end and restore heap
	for(long i = size; i > 1; i--){
		swap(data[0], data[i-1]);
		heapsort(data, 0, i-1);
	}
}



