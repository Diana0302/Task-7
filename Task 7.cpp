#include <iostream>

void BubbleSorting(int* arr, int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void SelectionSorting(int* arr, int size) {
	int min;
	for (int i = 0; i < size - 1; ++i) {
		min = i;
		for (int j = i + 1; j < size; ++j) {
			if (arr[j] > arr[min]) {
				min = j;
			}
			std::swap(arr[j], arr[min]);
		}
	}
}


int main() 
{
	int arr[20];
	int size;
	int a;
	std::cout << "Enter the size of array: ";
	std::cin >> size;
	std::cout << "Enter the array: ";
	for (int i = 0; i < size; ++i)
		std::cin >> arr[i];
	std::cout << "Choose 1 if you want to see Bubble sorting algorithm or choose 2 for Selestion: ";
	std::cin >> a;
	if (a == 1) {
		BubbleSorting(arr, size);
	}
	else {
		SelectionSorting(arr, size);
	}
std::cout << "ARRAY" << std::endl;
	for (int i = 0; i < size; ++i) {
		
		std::cout << arr[i] << " ";
		
	}
	std::cout << std::endl;
	return 0;
}