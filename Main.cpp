#include <iostream>

using namespace std;


int binarySearch(const int arr[], int size, int target) {
	int left = 0, right = size - 1, mid, position = -1, iterNum = 0;
	bool found = false;
	
	while (!found && left <= right) {
		cout << "iteration #: " << ++iterNum;
		mid = (left + right) / 2;
		cout << " left: " << left << " mid: " << mid << " right: " << right << endl; 
		if (arr[mid] == target) {
			found = true;
			position = mid;
		}
		else if (arr[mid] > target) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
		cout << "\tleft: " << left << " mid: " << mid << " right: " << right << endl << endl; 
	}
	return position;
}

void printArr(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void selectionSort(int arr[], int size) {
	int i, j, minIndex, minValue;
	
	for (i = 0; i < size - 1; i++) {
		minIndex = i;
		minValue = arr[i];
		for (j = i + 1; j < size; j++) {
			if (arr[j] < minValue) {
				minValue = arr[j];
				minIndex = j;
			}
		}
		arr[minIndex] = arr[i];
		arr[i] = minValue;
		
		// break out after first iteration to see what it looks like
		printArr(arr, size);
		break;
	}
}

void bubbleSort(int arr[], int size) {
	int j, temp;
	bool swap;
	
	do {
		swap = false;
		for (j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swap = true;
			}
		}
		
		// break out after first iteration to see what it looks like
		printArr(arr, size);
		break;
	} while (swap);
}

void insertionSort(int arr[], int size) {
	int i, j, currValue; 
	for (i = 1; i < size; i++) {
		currValue = arr[i];
		j = i - 1;
		while (j >= 0 && currValue < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = currValue;
		
		// break out after first iteration to see what it looks like
		printArr(arr, size);
		break;
	}
}


// prints the first n even numbers
void printFirstNEvenNumbers(int n) {
	int counter = 0;
	int i = 1;
	int even = 0;
	counter += 2; // for i = 1 and even = 0
	
	while (i <= n) {
		counter++; // for BC i <= n evaluating to true
		even = i * 2;
		counter++; // for even = i * 2
		cout << even << " ";
		counter++; // for cout
		i++;
		counter++; // for i++
	}
	counter++; // for one time BC i <=n evaluates to false
	cout << endl;
	counter++; // for cout 
	cout << "counter: " << counter << endl;
}



int main() {
	int nums1[] = {5, 3, 8, 6, 10, 1, 7, 4, 9, 2};
	int nums2[] = {5, 3, 8, 6, 10, 1, 7, 4, 9, 2};
	int nums3[] = {5, 3, 8, 6, 10, 1, 7, 4, 9, 2};
	int size = 10;
	selectionSort(nums1, 10);
	bubbleSort(nums2, 10);
	insertionSort(nums3, 10);
	
	const int numsSorted[] = {3, 4, 6, 8, 9, 12, 15, 16, 19, 20};
	binarySearch(numsSorted, size, 15);

	int n = 20;
	
	printFirstNEvenNumbers(n);


	return 0;
}
