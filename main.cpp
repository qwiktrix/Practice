#include <iostream>
#include <vector>
#include "bubbleSort.h"
#include "selectionSort.h"


void display(std::vector<int> & a, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << a[i] << " ";
	}
	
	std::cout << std::endl;
}

int main() {
	std::vector<int> a = {1, 5, 8, 2, 4, 3, 6};
	int size = a.size();
	
	std::cout << "\nTest Set" << std::endl;
	display(a, size);	

	selectionSort(a, size);
	
	std::cout << "\nOrdered Set" << std::endl;
	display(a, size);
}
