/* Bubble Sort Implementation */
#include <vector>
#include "bubbleSort.h"

void bubbleSort(std::vector<int> & arr, int n) {
	bool swp;
	int tmp;	
		
	for (int i = 0; i < n; i++) {
		swp = false;
		for (int j = 1; j < n; j++) {
			if (arr[j-1] > arr[j]) {			
				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
				swp = true;
			}
		}
		
		if (!swp) {break;}
	}
}

