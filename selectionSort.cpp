/* Selection Sort Implementation */
#include <vector>
#include "selectionSort.h"

void selectionSort(std::vector<int> &a, int n) {
	int k, tmp;
	
	for (int i = 0; i < n; i++) {
		k = i;

		for(int j = i+1; j < n; j++) {
			if (a[j] < a[k]) {
				k = j;			
			}		
		}
		
		tmp = a[i];
		a[i] = a[k];
		a[k] = tmp;
	}
}
