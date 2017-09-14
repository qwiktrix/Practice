/* Bubble Sort Implementation */
#include <iostream>
#include <vector>

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

void display(std::vector<int> & a, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << a[i] << std::endl;
	}
}

int main() {
	std::vector<int> a = {1, 5, 8, 2, 4, 3, 6};
	int size = a.size();
	
	display(a, size);	

	bubbleSort(a, size);
	
	std::cout << "Ordered" << std::endl;
	display(a, size);
}
