#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(int arr[], int low, int high, int target) {
	/*Base Case:*/
	if (low > high) {
		return -1;
	}

	int mid = (high + low) / 2;

	if (target == arr[mid]) {
		return mid;
	}
	else if (target < arr[mid]) {
		return BinarySearch(arr, low, mid - 1, target);
	}
	else {
		return BinarySearch(arr, mid + 1, high, target);
	}
}

int main() {
	int numElements;
	cout << "How many elements would you like to insert into arr1? ";
	cin >> numElements;
	int *arrPtr = new int[numElements];
	int sizeOfArr1 = (sizeof(int) * numElements) / sizeof(int);

	cout << "Enter elements in increasing order." << endl;
	for (int i = 0; i < numElements; ++i) {
		cout << "Enter value for index " << i << ": ";
		cin >> arrPtr[i];
	}

	int lower = 0;
	int higher = sizeOfArr1 - 1;
	int targetValue;
	while (1) {
		cout << "Enter an integer to see if it is contained in Arr1: ";
		cin >> targetValue;
		if (BinarySearch(arrPtr, lower, higher, targetValue) != -1) {
			cout << "Target value found at index " << BinarySearch(arrPtr, lower, higher, targetValue) << endl;
			break;
		}
		cout << targetValue << " is not contained within Arr1." << endl;
	}
	return 0;
}