/* Selection Sort Implementation */
#include <iostream>
#include <vector>

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

void display(std::vector<int> & a, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << a[i] << std::endl;
	}
}

int main() {
	std::vector<int> a = {1, 5, 8, 2, 4, 3, 6};
	int size = a.size();
	
	display(a, size);	

	selectionSort(a, size);
	
	std::cout << "Ordered" << std::endl;
	display(a, size);
}
