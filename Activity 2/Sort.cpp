#include <iostream>

using namespace std;

int main() {
	
	int max = 6;
	int currentSize = 5;
	int arr[max] = {3, 6, 9, 12, 15};
	

	cout << "Array: ";

	for(int i = 0 ; i < currentSize; i++){
		cout << arr[i] << " ";
	}

	for (int i = 0; i < currentSize - 1; i++) {
        for (int j = 0; j < currentSize - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	
	for(int i = 0 ; i < currentSize; i++){
		cout << arr[i] << " ";
	}

	return 0;
}
