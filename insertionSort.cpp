/* Insertion Sort Implementation */
#include <vector>
#include "insertionSort.h"

void insertionSort(std::vector<int> & a, int n) {
	int j, tmp;
	for (int i = 1; i < n; i++) {
		tmp = a[i];
		j = i-1;

		while (j >= 0 && a[j] > tmp) {
			a[j+1] = a[j];
			j--;
		}
		
		a[j+1] = tmp;
	}

}
